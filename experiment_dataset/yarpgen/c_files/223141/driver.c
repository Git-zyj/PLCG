#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)47892;
unsigned long long int var_5 = 13397013526014905758ULL;
unsigned short var_6 = (unsigned short)50375;
_Bool var_12 = (_Bool)1;
unsigned int var_13 = 3415509159U;
int zero = 0;
unsigned long long int var_19 = 11352136908740449967ULL;
long long int var_20 = 1405832799918830186LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
