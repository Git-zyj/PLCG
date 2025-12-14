#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -365229522;
unsigned long long int var_5 = 9895991990169059184ULL;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)1;
long long int var_14 = 6705346122721785690LL;
short var_15 = (short)18666;
int zero = 0;
unsigned short var_17 = (unsigned short)8202;
_Bool var_18 = (_Bool)0;
unsigned int var_19 = 853199217U;
int var_20 = 2088366767;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
