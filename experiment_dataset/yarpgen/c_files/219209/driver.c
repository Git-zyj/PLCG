#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22574;
unsigned long long int var_3 = 6476157765932051161ULL;
unsigned int var_8 = 2751609195U;
int zero = 0;
unsigned long long int var_14 = 6314021519902056304ULL;
unsigned short var_15 = (unsigned short)54583;
_Bool var_16 = (_Bool)1;
unsigned int var_17 = 1417256413U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
