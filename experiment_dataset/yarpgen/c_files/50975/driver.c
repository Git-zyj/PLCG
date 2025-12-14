#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)194;
unsigned char var_2 = (unsigned char)66;
_Bool var_3 = (_Bool)0;
long long int var_7 = -4123621574093306114LL;
int var_8 = -1159697488;
unsigned int var_10 = 3407798901U;
signed char var_13 = (signed char)82;
_Bool var_14 = (_Bool)0;
int zero = 0;
long long int var_18 = 2940264412923699651LL;
unsigned char var_19 = (unsigned char)1;
short var_20 = (short)15371;
signed char var_21 = (signed char)40;
unsigned long long int var_22 = 5781775734234275026ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
