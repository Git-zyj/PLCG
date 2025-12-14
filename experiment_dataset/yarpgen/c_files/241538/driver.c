#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1895781105U;
_Bool var_3 = (_Bool)0;
short var_6 = (short)9929;
unsigned long long int var_11 = 185434423013912724ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)12457;
signed char var_14 = (signed char)-123;
unsigned int var_15 = 451663111U;
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
