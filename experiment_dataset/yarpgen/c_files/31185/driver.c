#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 911771458;
unsigned short var_5 = (unsigned short)58043;
unsigned long long int var_11 = 6296953239031381196ULL;
signed char var_12 = (signed char)-26;
unsigned long long int var_14 = 13357047937063921491ULL;
int var_18 = -1264757099;
int zero = 0;
int var_19 = -654398953;
unsigned short var_20 = (unsigned short)16718;
short var_21 = (short)19715;
short var_22 = (short)676;
_Bool var_23 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
