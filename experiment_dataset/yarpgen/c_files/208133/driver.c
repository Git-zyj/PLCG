#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-26;
unsigned char var_5 = (unsigned char)12;
int var_7 = 492522493;
signed char var_11 = (signed char)-17;
short var_13 = (short)19274;
int var_17 = -832025863;
unsigned int var_19 = 2304012330U;
int zero = 0;
unsigned int var_20 = 2978950011U;
unsigned long long int var_21 = 13164821586823494181ULL;
short var_22 = (short)4342;
short var_23 = (short)22885;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
