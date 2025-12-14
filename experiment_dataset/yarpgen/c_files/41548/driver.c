#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4656453122895031763LL;
long long int var_1 = 4400342244743128776LL;
unsigned short var_3 = (unsigned short)14964;
int var_4 = 1405536151;
_Bool var_5 = (_Bool)1;
_Bool var_7 = (_Bool)0;
long long int var_10 = -4128152754177540253LL;
int zero = 0;
unsigned long long int var_11 = 5239370020505855016ULL;
short var_12 = (short)21759;
short var_13 = (short)-10235;
unsigned short var_14 = (unsigned short)16694;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
