#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)36814;
signed char var_2 = (signed char)-76;
unsigned short var_3 = (unsigned short)4827;
int var_5 = -864337947;
int var_7 = 1289407176;
int var_10 = 936909310;
int var_11 = -1715210147;
signed char var_14 = (signed char)1;
int zero = 0;
short var_16 = (short)8920;
_Bool var_17 = (_Bool)1;
int var_18 = 2055524150;
signed char var_19 = (signed char)118;
void init() {
}

void checksum() {
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
