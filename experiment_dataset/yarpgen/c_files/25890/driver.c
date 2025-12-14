#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)29916;
int var_4 = 1104179082;
short var_5 = (short)-10984;
unsigned short var_6 = (unsigned short)57340;
short var_9 = (short)-16097;
short var_14 = (short)2727;
unsigned char var_15 = (unsigned char)176;
short var_16 = (short)-17487;
short var_17 = (short)-5530;
int zero = 0;
unsigned short var_18 = (unsigned short)48817;
short var_19 = (short)-431;
unsigned char var_20 = (unsigned char)121;
signed char var_21 = (signed char)-11;
unsigned short var_22 = (unsigned short)62733;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
