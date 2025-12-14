#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -5585161304523722403LL;
unsigned int var_10 = 876208587U;
long long int var_11 = 5269080339916340108LL;
long long int var_16 = 2126317300258647039LL;
int zero = 0;
long long int var_19 = 8573171167053148747LL;
signed char var_20 = (signed char)-56;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)147;
void init() {
}

void checksum() {
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
