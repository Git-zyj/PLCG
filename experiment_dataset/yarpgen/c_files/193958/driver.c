#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3027783351U;
signed char var_2 = (signed char)-3;
int var_9 = -1200954849;
_Bool var_11 = (_Bool)0;
short var_14 = (short)-31436;
int var_17 = -1318746670;
int zero = 0;
long long int var_20 = 5918783011027811073LL;
int var_21 = -1495124916;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 1225748944U;
_Bool var_24 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
