#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_1 = (short)4041;
int var_5 = -749181830;
signed char var_8 = (signed char)-57;
short var_9 = (short)1795;
unsigned long long int var_10 = 4231865574318375078ULL;
signed char var_13 = (signed char)82;
int zero = 0;
unsigned long long int var_14 = 17304981462504251631ULL;
unsigned long long int var_15 = 4403444460532363118ULL;
int var_16 = -518782246;
void init() {
}

void checksum() {
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
