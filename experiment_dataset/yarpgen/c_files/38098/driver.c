#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -718776141;
long long int var_6 = 5409543012519927461LL;
unsigned char var_9 = (unsigned char)153;
int zero = 0;
long long int var_10 = -1722893447534123571LL;
short var_11 = (short)11450;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
