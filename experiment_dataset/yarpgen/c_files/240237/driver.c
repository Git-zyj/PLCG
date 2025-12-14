#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_2 = (_Bool)0;
unsigned long long int var_4 = 11216954213119605669ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)21073;
int zero = 0;
signed char var_10 = (signed char)31;
unsigned long long int var_11 = 11165498787084388308ULL;
signed char var_12 = (signed char)44;
signed char var_13 = (signed char)112;
unsigned short var_14 = (unsigned short)36773;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
