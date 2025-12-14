#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
_Bool var_1 = (_Bool)1;
short var_2 = (short)-59;
int var_3 = 526442815;
unsigned char var_5 = (unsigned char)208;
int var_7 = 1379994945;
_Bool var_14 = (_Bool)1;
int var_15 = -898837596;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)36;
short var_18 = (short)-1089;
short var_19 = (short)-1973;
int var_20 = -178286990;
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
