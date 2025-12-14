#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-27648;
short var_4 = (short)26217;
signed char var_7 = (signed char)88;
unsigned long long int var_13 = 9218612435821669065ULL;
unsigned char var_14 = (unsigned char)128;
int var_15 = 941643719;
_Bool var_17 = (_Bool)1;
int zero = 0;
_Bool var_18 = (_Bool)0;
long long int var_19 = -6414693311668742755LL;
signed char var_20 = (signed char)105;
_Bool var_21 = (_Bool)1;
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
