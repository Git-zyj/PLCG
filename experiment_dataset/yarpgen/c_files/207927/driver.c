#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-35;
unsigned char var_5 = (unsigned char)4;
_Bool var_7 = (_Bool)0;
long long int var_10 = -2252327897076403838LL;
unsigned short var_11 = (unsigned short)19616;
int zero = 0;
short var_13 = (short)24066;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)2920;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
