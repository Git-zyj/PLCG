#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 200992808;
unsigned int var_3 = 2372800291U;
_Bool var_5 = (_Bool)1;
unsigned int var_7 = 1214737945U;
short var_8 = (short)3651;
long long int var_9 = 4811798005238716311LL;
int zero = 0;
int var_13 = -2114691566;
unsigned int var_14 = 3469027018U;
void init() {
}

void checksum() {
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
