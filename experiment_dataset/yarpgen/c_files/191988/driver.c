#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -663249235;
int var_2 = -1330683372;
long long int var_13 = 1486938361270612343LL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 6126728929351857082LL;
int zero = 0;
int var_20 = -827798802;
long long int var_21 = -8589066910138344701LL;
unsigned short var_22 = (unsigned short)52532;
_Bool var_23 = (_Bool)0;
unsigned short var_24 = (unsigned short)42487;
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
