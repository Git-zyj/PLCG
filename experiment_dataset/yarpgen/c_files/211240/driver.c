#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3677168688U;
unsigned char var_3 = (unsigned char)225;
unsigned int var_4 = 1387593884U;
unsigned long long int var_6 = 9508493481431280375ULL;
unsigned int var_8 = 164389480U;
short var_10 = (short)-23499;
unsigned short var_12 = (unsigned short)25213;
int zero = 0;
unsigned short var_14 = (unsigned short)9608;
unsigned long long int var_15 = 9687312676992135971ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
