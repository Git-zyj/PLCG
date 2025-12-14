#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3755863526U;
unsigned short var_8 = (unsigned short)15308;
unsigned int var_12 = 3528073311U;
unsigned int var_14 = 1470551646U;
unsigned int var_15 = 1982398830U;
short var_16 = (short)-22145;
int zero = 0;
long long int var_17 = 8927634733956416088LL;
int var_18 = 1501756952;
signed char var_19 = (signed char)-116;
unsigned int var_20 = 815304781U;
short var_21 = (short)31952;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
