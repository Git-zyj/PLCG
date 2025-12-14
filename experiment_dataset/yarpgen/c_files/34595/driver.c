#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7909553674301101525LL;
unsigned short var_3 = (unsigned short)58233;
unsigned short var_6 = (unsigned short)4712;
short var_7 = (short)-6983;
long long int var_8 = 1337548498243319316LL;
_Bool var_10 = (_Bool)1;
unsigned short var_13 = (unsigned short)18675;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned char var_18 = (unsigned char)42;
unsigned short var_19 = (unsigned short)58683;
unsigned int var_20 = 3167866753U;
long long int var_21 = -9125045043115555906LL;
unsigned long long int var_22 = 16372765426866983647ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
