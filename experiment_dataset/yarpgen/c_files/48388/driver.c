#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 12216387848610027224ULL;
signed char var_2 = (signed char)44;
unsigned long long int var_3 = 7752454080634081378ULL;
unsigned int var_4 = 3768611947U;
unsigned long long int var_6 = 5651851701927631113ULL;
_Bool var_7 = (_Bool)0;
unsigned short var_13 = (unsigned short)47114;
unsigned int var_15 = 820807077U;
unsigned short var_16 = (unsigned short)26362;
unsigned long long int var_17 = 5098792176898537788ULL;
int zero = 0;
short var_18 = (short)-11751;
_Bool var_19 = (_Bool)0;
short var_20 = (short)-11888;
unsigned char var_21 = (unsigned char)62;
short var_22 = (short)-2283;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
