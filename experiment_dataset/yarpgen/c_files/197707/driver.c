#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1020099813;
short var_1 = (short)-28048;
unsigned int var_2 = 1019702068U;
unsigned long long int var_4 = 14094472362861054905ULL;
unsigned short var_5 = (unsigned short)441;
int var_6 = -259233241;
long long int var_7 = 7818066774363420518LL;
unsigned long long int var_9 = 17934046890772360714ULL;
int zero = 0;
unsigned int var_12 = 1882541730U;
unsigned short var_13 = (unsigned short)16579;
unsigned long long int var_14 = 1270703773876115351ULL;
int var_15 = 111936064;
signed char var_16 = (signed char)-32;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
