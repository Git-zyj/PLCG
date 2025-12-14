#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 4411648399729742898ULL;
signed char var_2 = (signed char)-9;
unsigned int var_5 = 3603990473U;
_Bool var_8 = (_Bool)0;
unsigned long long int var_12 = 16974866244898501045ULL;
int zero = 0;
unsigned int var_13 = 805737730U;
short var_14 = (short)1676;
void init() {
}

void checksum() {
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
