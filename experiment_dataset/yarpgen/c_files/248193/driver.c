#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)3680;
short var_1 = (short)7600;
short var_2 = (short)13460;
int var_4 = -620801705;
unsigned int var_5 = 630537125U;
unsigned char var_6 = (unsigned char)9;
unsigned short var_7 = (unsigned short)34565;
unsigned char var_8 = (unsigned char)111;
int zero = 0;
unsigned long long int var_11 = 17784521289568239048ULL;
unsigned int var_12 = 2872524522U;
unsigned char var_13 = (unsigned char)205;
unsigned int var_14 = 3923159484U;
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
