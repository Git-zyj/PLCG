#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)237;
unsigned int var_4 = 2045861657U;
signed char var_8 = (signed char)-100;
unsigned int var_10 = 2234939646U;
unsigned short var_11 = (unsigned short)53311;
int var_13 = -1514244659;
unsigned short var_14 = (unsigned short)9976;
long long int var_16 = 7491110996611192504LL;
int zero = 0;
short var_17 = (short)-15620;
unsigned int var_18 = 3595566346U;
signed char var_19 = (signed char)-125;
unsigned short var_20 = (unsigned short)34145;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
