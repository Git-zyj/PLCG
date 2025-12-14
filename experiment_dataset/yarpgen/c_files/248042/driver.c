#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)555;
unsigned int var_5 = 119017318U;
unsigned int var_17 = 1297579442U;
unsigned char var_18 = (unsigned char)131;
int zero = 0;
long long int var_19 = 4360023294673268742LL;
unsigned int var_20 = 3606701186U;
short var_21 = (short)-12334;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
