#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned short var_1 = (unsigned short)11414;
signed char var_2 = (signed char)-104;
unsigned int var_3 = 2886441092U;
short var_5 = (short)25228;
_Bool var_7 = (_Bool)1;
long long int var_8 = 48947022549948896LL;
int zero = 0;
int var_10 = 850032311;
int var_11 = 1719818239;
unsigned int var_12 = 2931968964U;
short var_13 = (short)-4004;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
