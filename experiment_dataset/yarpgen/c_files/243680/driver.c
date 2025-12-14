#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 442642246U;
unsigned long long int var_5 = 14753709363584560694ULL;
unsigned int var_7 = 2528549667U;
long long int var_13 = 2445171311919622857LL;
int zero = 0;
unsigned long long int var_19 = 11440413888400258028ULL;
unsigned char var_20 = (unsigned char)55;
_Bool var_21 = (_Bool)0;
void init() {
}

void checksum() {
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
