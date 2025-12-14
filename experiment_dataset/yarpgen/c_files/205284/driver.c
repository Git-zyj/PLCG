#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)66;
int var_3 = -1554007506;
signed char var_4 = (signed char)61;
signed char var_6 = (signed char)-111;
long long int var_14 = 6401110795183861400LL;
unsigned short var_15 = (unsigned short)56990;
short var_16 = (short)28639;
unsigned char var_18 = (unsigned char)56;
int zero = 0;
_Bool var_20 = (_Bool)0;
long long int var_21 = -7271288471951183204LL;
unsigned int var_22 = 3886248540U;
unsigned long long int var_23 = 6101390055150079538ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
