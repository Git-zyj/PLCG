#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 296850386;
unsigned short var_5 = (unsigned short)8675;
int zero = 0;
int var_15 = -31992917;
int var_16 = -1135267023;
unsigned short var_17 = (unsigned short)26284;
_Bool var_18 = (_Bool)1;
long long int var_19 = -1340611163303206146LL;
unsigned short var_20 = (unsigned short)17985;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
