#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1504401839;
long long int var_2 = -7061138860291052595LL;
signed char var_3 = (signed char)-47;
unsigned short var_4 = (unsigned short)8661;
unsigned long long int var_6 = 18030593551540140723ULL;
int var_7 = 1999171377;
_Bool var_15 = (_Bool)1;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned short var_17 = (unsigned short)21838;
signed char var_18 = (signed char)88;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
