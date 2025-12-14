#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-29631;
_Bool var_5 = (_Bool)0;
short var_7 = (short)8342;
int var_8 = -1563729169;
int zero = 0;
unsigned short var_13 = (unsigned short)56477;
unsigned char var_14 = (unsigned char)164;
long long int var_15 = -864203589289885492LL;
unsigned int var_16 = 2514709461U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
