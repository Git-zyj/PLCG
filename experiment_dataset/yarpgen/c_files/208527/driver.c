#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)93;
unsigned int var_1 = 458268566U;
signed char var_3 = (signed char)1;
_Bool var_5 = (_Bool)0;
unsigned short var_6 = (unsigned short)52729;
unsigned short var_10 = (unsigned short)20116;
int zero = 0;
long long int var_12 = 4426265628621407266LL;
long long int var_13 = 6429887063439409192LL;
signed char var_14 = (signed char)22;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)65478;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
