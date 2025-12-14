#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)17220;
signed char var_4 = (signed char)-99;
unsigned long long int var_5 = 4588485664865235191ULL;
int var_6 = 2135539755;
_Bool var_7 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_10 = (short)-19063;
int var_11 = 914541929;
int zero = 0;
unsigned short var_12 = (unsigned short)47225;
signed char var_13 = (signed char)74;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)-103;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
