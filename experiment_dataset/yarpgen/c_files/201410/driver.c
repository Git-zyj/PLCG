#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 7607520144412298785LL;
long long int var_3 = 9051784058754878180LL;
unsigned short var_7 = (unsigned short)40140;
unsigned char var_11 = (unsigned char)102;
unsigned int var_12 = 2179679172U;
unsigned short var_13 = (unsigned short)15722;
int zero = 0;
int var_15 = -295551058;
_Bool var_16 = (_Bool)0;
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
