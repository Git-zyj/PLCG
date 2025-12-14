#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13261325422447732409ULL;
long long int var_8 = -5567246776986759837LL;
int zero = 0;
unsigned int var_18 = 1506418687U;
unsigned short var_19 = (unsigned short)23704;
short var_20 = (short)12607;
unsigned long long int var_21 = 3624184581354062542ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
