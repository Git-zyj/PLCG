#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = 1675664707;
unsigned long long int var_6 = 17328182581006681875ULL;
unsigned int var_8 = 4206191467U;
signed char var_9 = (signed char)-107;
int zero = 0;
_Bool var_14 = (_Bool)0;
int var_15 = 678747811;
signed char var_16 = (signed char)-2;
short var_17 = (short)-4521;
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
