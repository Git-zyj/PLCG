#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-35;
int var_1 = 1634898983;
unsigned short var_2 = (unsigned short)65044;
unsigned int var_10 = 1636817798U;
signed char var_11 = (signed char)56;
_Bool var_12 = (_Bool)1;
int zero = 0;
int var_13 = 1641699393;
unsigned short var_14 = (unsigned short)2140;
unsigned short var_15 = (unsigned short)54607;
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
