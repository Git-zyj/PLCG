#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)65;
unsigned short var_3 = (unsigned short)46952;
long long int var_7 = 4466478782138780656LL;
signed char var_9 = (signed char)-98;
long long int var_11 = 3129252015831973764LL;
short var_12 = (short)14607;
unsigned int var_13 = 2587954383U;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-19597;
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
