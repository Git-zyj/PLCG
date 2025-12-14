#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5118942736432083278ULL;
signed char var_3 = (signed char)-17;
_Bool var_7 = (_Bool)1;
int var_11 = 648506124;
int var_14 = -1849731596;
int var_15 = -1236899715;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_19 = 479801728;
unsigned short var_20 = (unsigned short)4390;
void init() {
}

void checksum() {
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
