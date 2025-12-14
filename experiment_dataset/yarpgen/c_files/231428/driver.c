#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -2123175674;
signed char var_1 = (signed char)118;
unsigned long long int var_2 = 5236061613586452078ULL;
int var_4 = -1422797989;
unsigned short var_5 = (unsigned short)34927;
unsigned long long int var_6 = 980614097231764543ULL;
signed char var_8 = (signed char)49;
int var_9 = -1280420956;
signed char var_10 = (signed char)5;
unsigned char var_11 = (unsigned char)227;
int zero = 0;
unsigned char var_12 = (unsigned char)157;
int var_13 = 110262537;
unsigned long long int var_14 = 7507269046298042033ULL;
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
