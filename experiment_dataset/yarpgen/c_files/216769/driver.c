#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1293556254;
unsigned short var_2 = (unsigned short)13119;
int var_3 = 1609743;
unsigned short var_6 = (unsigned short)49202;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)1;
short var_12 = (short)-11229;
_Bool var_15 = (_Bool)0;
int zero = 0;
short var_16 = (short)16313;
unsigned short var_17 = (unsigned short)12738;
unsigned short var_18 = (unsigned short)51570;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)23253;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
