#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-7;
_Bool var_2 = (_Bool)0;
signed char var_3 = (signed char)-61;
int var_5 = 319233264;
_Bool var_8 = (_Bool)1;
_Bool var_10 = (_Bool)1;
short var_12 = (short)15156;
unsigned short var_14 = (unsigned short)65240;
unsigned int var_17 = 160076638U;
unsigned char var_19 = (unsigned char)52;
int zero = 0;
unsigned char var_20 = (unsigned char)152;
unsigned long long int var_21 = 6469163085202257467ULL;
_Bool var_22 = (_Bool)0;
_Bool var_23 = (_Bool)1;
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
