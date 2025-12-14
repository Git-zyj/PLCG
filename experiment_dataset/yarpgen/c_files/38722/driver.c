#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)225;
long long int var_2 = 6984752626274884145LL;
short var_3 = (short)32109;
unsigned char var_4 = (unsigned char)94;
unsigned char var_6 = (unsigned char)226;
long long int var_12 = 8866921309809994194LL;
int var_15 = 349177420;
short var_18 = (short)-2294;
int zero = 0;
unsigned long long int var_19 = 6602480297920096515ULL;
short var_20 = (short)18881;
short var_21 = (short)31811;
unsigned int var_22 = 2202678950U;
void init() {
}

void checksum() {
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
