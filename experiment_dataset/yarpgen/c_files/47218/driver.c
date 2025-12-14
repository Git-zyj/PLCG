#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)125;
_Bool var_2 = (_Bool)1;
long long int var_3 = 8972116348441444186LL;
unsigned short var_5 = (unsigned short)65351;
unsigned int var_6 = 537896720U;
unsigned int var_7 = 3434274205U;
long long int var_8 = 5140007048430662480LL;
unsigned char var_10 = (unsigned char)250;
_Bool var_11 = (_Bool)1;
long long int var_14 = -5093196138179379893LL;
long long int var_15 = 8906720864382818597LL;
int zero = 0;
long long int var_17 = -1426749712530201134LL;
unsigned char var_18 = (unsigned char)100;
void init() {
}

void checksum() {
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
