#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1724739894U;
unsigned short var_1 = (unsigned short)2400;
unsigned short var_2 = (unsigned short)5799;
unsigned int var_3 = 1773825239U;
_Bool var_4 = (_Bool)1;
unsigned short var_7 = (unsigned short)13531;
_Bool var_10 = (_Bool)0;
unsigned int var_12 = 589439006U;
unsigned int var_13 = 2554615782U;
unsigned short var_15 = (unsigned short)43064;
int zero = 0;
unsigned char var_17 = (unsigned char)217;
unsigned short var_18 = (unsigned short)38701;
int var_19 = 1556701935;
unsigned long long int var_20 = 2644233109526675735ULL;
void init() {
}

void checksum() {
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
