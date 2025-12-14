#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)87;
unsigned short var_4 = (unsigned short)63774;
short var_5 = (short)10812;
unsigned char var_9 = (unsigned char)7;
int zero = 0;
unsigned long long int var_11 = 13837989824084455820ULL;
short var_12 = (short)-25056;
unsigned int var_13 = 2048841368U;
unsigned short var_14 = (unsigned short)9028;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
