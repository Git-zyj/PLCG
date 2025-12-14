#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)7426;
signed char var_2 = (signed char)-118;
unsigned char var_3 = (unsigned char)129;
long long int var_4 = -8842948925909752889LL;
unsigned char var_7 = (unsigned char)220;
_Bool var_13 = (_Bool)1;
int zero = 0;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 868791777U;
void init() {
}

void checksum() {
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
