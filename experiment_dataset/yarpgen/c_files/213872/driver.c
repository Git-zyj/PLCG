#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)230;
unsigned short var_3 = (unsigned short)55959;
unsigned char var_4 = (unsigned char)41;
signed char var_5 = (signed char)118;
_Bool var_6 = (_Bool)1;
signed char var_8 = (signed char)-127;
unsigned char var_15 = (unsigned char)109;
int zero = 0;
unsigned char var_16 = (unsigned char)251;
signed char var_17 = (signed char)38;
short var_18 = (short)-11481;
signed char var_19 = (signed char)53;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
