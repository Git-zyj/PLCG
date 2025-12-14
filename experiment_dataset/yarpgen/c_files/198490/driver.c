#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 6087587941994092087ULL;
unsigned int var_2 = 934841403U;
unsigned char var_3 = (unsigned char)131;
signed char var_5 = (signed char)-71;
unsigned long long int var_6 = 6370688439440961219ULL;
unsigned short var_7 = (unsigned short)38646;
short var_8 = (short)-27555;
int zero = 0;
unsigned short var_10 = (unsigned short)5885;
unsigned char var_11 = (unsigned char)88;
unsigned short var_12 = (unsigned short)45797;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
