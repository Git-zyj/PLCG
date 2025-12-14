#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_3 = (unsigned short)19662;
int var_7 = 1447649238;
unsigned long long int var_10 = 2536343695133785968ULL;
unsigned int var_13 = 3630308655U;
int zero = 0;
signed char var_15 = (signed char)-124;
long long int var_16 = 3078711890892367200LL;
int var_17 = -53095596;
long long int var_18 = -2830077797312416464LL;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
