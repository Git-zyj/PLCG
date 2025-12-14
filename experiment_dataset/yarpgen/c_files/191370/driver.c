#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)243;
unsigned int var_3 = 3485482562U;
unsigned short var_4 = (unsigned short)49767;
unsigned short var_5 = (unsigned short)20164;
unsigned char var_7 = (unsigned char)56;
unsigned long long int var_8 = 10359059308715714937ULL;
unsigned int var_9 = 41766389U;
unsigned char var_12 = (unsigned char)94;
unsigned char var_15 = (unsigned char)108;
int zero = 0;
unsigned char var_18 = (unsigned char)150;
unsigned short var_19 = (unsigned short)64144;
unsigned char var_20 = (unsigned char)159;
unsigned short var_21 = (unsigned short)47112;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
