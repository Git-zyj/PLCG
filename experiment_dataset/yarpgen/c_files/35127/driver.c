#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)3854;
_Bool var_3 = (_Bool)1;
_Bool var_4 = (_Bool)1;
unsigned char var_8 = (unsigned char)194;
signed char var_11 = (signed char)25;
int zero = 0;
signed char var_15 = (signed char)-61;
unsigned char var_16 = (unsigned char)89;
unsigned short var_17 = (unsigned short)31435;
short var_18 = (short)15808;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
