#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6296100164478525453LL;
int var_3 = 1555997459;
_Bool var_7 = (_Bool)0;
int var_10 = -1380885705;
long long int var_11 = 7741715259096887729LL;
int zero = 0;
unsigned short var_12 = (unsigned short)63383;
unsigned short var_13 = (unsigned short)14450;
void init() {
}

void checksum() {
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
