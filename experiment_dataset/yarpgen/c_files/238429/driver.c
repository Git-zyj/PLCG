#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)23;
unsigned int var_4 = 4025605699U;
unsigned char var_6 = (unsigned char)166;
unsigned int var_7 = 4034146232U;
unsigned int var_8 = 4203012461U;
unsigned int var_10 = 677812378U;
unsigned long long int var_11 = 14361973544704771452ULL;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 4238336234U;
unsigned int var_14 = 2575458059U;
void init() {
}

void checksum() {
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
