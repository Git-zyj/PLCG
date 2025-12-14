#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)32200;
signed char var_5 = (signed char)-84;
_Bool var_6 = (_Bool)0;
unsigned long long int var_9 = 10141053548534645156ULL;
_Bool var_10 = (_Bool)1;
signed char var_11 = (signed char)-83;
int zero = 0;
signed char var_12 = (signed char)-5;
int var_13 = -865597314;
unsigned char var_14 = (unsigned char)148;
unsigned short var_15 = (unsigned short)15830;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
