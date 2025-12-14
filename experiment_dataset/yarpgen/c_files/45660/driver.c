#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 628901420U;
unsigned int var_2 = 809897124U;
long long int var_4 = -9019968521234518175LL;
unsigned int var_6 = 967857740U;
unsigned int var_8 = 3634493559U;
_Bool var_9 = (_Bool)0;
int zero = 0;
short var_11 = (short)-295;
unsigned short var_12 = (unsigned short)58819;
short var_13 = (short)14681;
_Bool var_14 = (_Bool)1;
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
