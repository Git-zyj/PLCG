#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
_Bool var_3 = (_Bool)1;
int var_5 = 1658836821;
unsigned int var_6 = 4216328825U;
signed char var_9 = (signed char)108;
unsigned short var_11 = (unsigned short)36038;
int zero = 0;
int var_13 = 1912359874;
unsigned int var_14 = 2029512107U;
unsigned int var_15 = 64703836U;
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
