#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 2477183262U;
unsigned int var_3 = 2989485139U;
unsigned long long int var_8 = 16942004256243294490ULL;
unsigned long long int var_9 = 6626727352243505770ULL;
unsigned int var_11 = 4055298336U;
unsigned int var_12 = 3533008016U;
_Bool var_18 = (_Bool)1;
int zero = 0;
unsigned short var_19 = (unsigned short)36850;
unsigned char var_20 = (unsigned char)55;
unsigned char var_21 = (unsigned char)30;
short var_22 = (short)2889;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
