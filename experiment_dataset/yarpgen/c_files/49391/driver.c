#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3643581523U;
short var_1 = (short)-25548;
unsigned long long int var_2 = 2551447593599151560ULL;
unsigned int var_3 = 937542498U;
signed char var_4 = (signed char)-2;
signed char var_6 = (signed char)-35;
unsigned char var_10 = (unsigned char)205;
signed char var_11 = (signed char)-37;
signed char var_12 = (signed char)-13;
unsigned short var_14 = (unsigned short)40596;
short var_15 = (short)16106;
int zero = 0;
unsigned short var_18 = (unsigned short)47065;
int var_19 = 971950717;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
