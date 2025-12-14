#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3313657407U;
unsigned short var_1 = (unsigned short)60336;
_Bool var_2 = (_Bool)0;
unsigned short var_7 = (unsigned short)41506;
unsigned long long int var_9 = 15462805649856711056ULL;
long long int var_10 = 9089439891485611761LL;
signed char var_12 = (signed char)98;
int zero = 0;
short var_14 = (short)15866;
long long int var_15 = -3541008659702785936LL;
unsigned int var_16 = 2816282087U;
unsigned long long int var_17 = 15615967066373514156ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
