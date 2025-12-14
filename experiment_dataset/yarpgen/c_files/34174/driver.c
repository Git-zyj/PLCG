#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16301052453933600158ULL;
unsigned int var_1 = 1281720348U;
unsigned int var_2 = 3318354591U;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 16443130810187779422ULL;
unsigned int var_5 = 306006359U;
unsigned int var_6 = 1940139417U;
unsigned long long int var_7 = 13837341240156659170ULL;
int var_8 = 288117763;
int zero = 0;
unsigned short var_10 = (unsigned short)41193;
signed char var_11 = (signed char)-66;
_Bool var_12 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
