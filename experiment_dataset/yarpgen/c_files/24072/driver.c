#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_1 = 6653569986798015000LL;
unsigned short var_3 = (unsigned short)37651;
_Bool var_4 = (_Bool)1;
long long int var_6 = 5568779931376684961LL;
unsigned char var_10 = (unsigned char)202;
unsigned short var_16 = (unsigned short)27352;
int zero = 0;
unsigned long long int var_20 = 13879788974201640902ULL;
_Bool var_21 = (_Bool)1;
unsigned long long int var_22 = 8376380820853452613ULL;
void init() {
}

void checksum() {
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
