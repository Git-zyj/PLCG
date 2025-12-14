#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 18419674868651393805ULL;
short var_9 = (short)-3694;
unsigned char var_10 = (unsigned char)201;
int zero = 0;
short var_20 = (short)265;
unsigned int var_21 = 3983565859U;
unsigned short var_22 = (unsigned short)29538;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
