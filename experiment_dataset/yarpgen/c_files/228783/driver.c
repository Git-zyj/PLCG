#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3833660663U;
_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)9;
unsigned int var_8 = 4170882098U;
long long int var_12 = 7298256797519466LL;
int zero = 0;
unsigned char var_13 = (unsigned char)110;
signed char var_14 = (signed char)-39;
int var_15 = -2011317748;
unsigned char var_16 = (unsigned char)152;
void init() {
}

void checksum() {
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
