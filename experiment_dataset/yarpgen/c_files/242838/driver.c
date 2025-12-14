#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)10423;
unsigned char var_1 = (unsigned char)86;
int var_3 = 2099619814;
unsigned short var_4 = (unsigned short)4415;
unsigned short var_5 = (unsigned short)34300;
signed char var_6 = (signed char)-35;
unsigned int var_7 = 3292957442U;
signed char var_9 = (signed char)-57;
int zero = 0;
unsigned short var_10 = (unsigned short)17343;
int var_11 = 93366236;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
