#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 657348772;
unsigned short var_8 = (unsigned short)36792;
int var_13 = -1045999347;
_Bool var_15 = (_Bool)0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 17970694531339778756ULL;
int zero = 0;
int var_19 = -2012774854;
short var_20 = (short)26705;
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
