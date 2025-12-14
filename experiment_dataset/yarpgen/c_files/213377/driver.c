#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
int var_8 = 916273982;
long long int var_10 = 5208485414539455157LL;
unsigned short var_14 = (unsigned short)56342;
int var_17 = -1676815722;
int zero = 0;
unsigned long long int var_19 = 3119058608674444424ULL;
long long int var_20 = 4140041163422275357LL;
long long int var_21 = -2114218308924779818LL;
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
