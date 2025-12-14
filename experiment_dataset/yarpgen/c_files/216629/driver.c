#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-45;
unsigned long long int var_2 = 16920792328851981228ULL;
unsigned short var_3 = (unsigned short)54243;
short var_4 = (short)28357;
unsigned long long int var_5 = 16636083140530932737ULL;
signed char var_6 = (signed char)-105;
unsigned char var_7 = (unsigned char)57;
signed char var_11 = (signed char)-64;
short var_13 = (short)-26131;
int zero = 0;
unsigned long long int var_14 = 6459730707755353910ULL;
signed char var_15 = (signed char)92;
signed char var_16 = (signed char)-102;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
