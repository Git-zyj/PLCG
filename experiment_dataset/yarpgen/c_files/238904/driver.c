#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)9848;
signed char var_1 = (signed char)108;
unsigned short var_3 = (unsigned short)34384;
unsigned long long int var_5 = 17322829916396613076ULL;
_Bool var_7 = (_Bool)1;
unsigned char var_12 = (unsigned char)207;
signed char var_13 = (signed char)5;
unsigned int var_14 = 607480795U;
int zero = 0;
unsigned char var_15 = (unsigned char)246;
signed char var_16 = (signed char)62;
unsigned short var_17 = (unsigned short)9579;
signed char var_18 = (signed char)-84;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
