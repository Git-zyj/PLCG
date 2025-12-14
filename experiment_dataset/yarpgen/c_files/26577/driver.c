#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_7 = (signed char)-36;
_Bool var_10 = (_Bool)1;
unsigned long long int var_11 = 2347831343158879522ULL;
long long int var_14 = -6104470333698171192LL;
unsigned char var_17 = (unsigned char)236;
_Bool var_19 = (_Bool)1;
int zero = 0;
unsigned char var_20 = (unsigned char)245;
unsigned int var_21 = 3823735123U;
signed char var_22 = (signed char)102;
int var_23 = -935965134;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
