#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2115169029318354433LL;
signed char var_3 = (signed char)14;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-25173;
int zero = 0;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)40076;
void init() {
}

void checksum() {
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
