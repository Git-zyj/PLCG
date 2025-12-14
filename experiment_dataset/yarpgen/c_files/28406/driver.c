#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3206968414U;
unsigned short var_3 = (unsigned short)59038;
unsigned int var_5 = 405616070U;
unsigned int var_8 = 3272293401U;
long long int var_9 = 9144119161309702178LL;
int zero = 0;
int var_11 = 1012518983;
unsigned short var_12 = (unsigned short)35225;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
