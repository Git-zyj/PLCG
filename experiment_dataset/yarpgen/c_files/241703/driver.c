#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)8516;
unsigned long long int var_4 = 339039248096242409ULL;
signed char var_5 = (signed char)6;
int var_8 = 616478287;
long long int var_10 = -625714043451577058LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned int var_12 = 4069394580U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
