#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-104;
unsigned short var_4 = (unsigned short)44306;
signed char var_7 = (signed char)114;
signed char var_10 = (signed char)-71;
int zero = 0;
signed char var_15 = (signed char)84;
long long int var_16 = 3668333234461375058LL;
unsigned long long int var_17 = 11013804079121057487ULL;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)1;
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
