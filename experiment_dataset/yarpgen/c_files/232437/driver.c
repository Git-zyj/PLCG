#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 210092650;
unsigned int var_1 = 738650468U;
long long int var_2 = 5349502968979793168LL;
_Bool var_5 = (_Bool)0;
unsigned int var_6 = 4099755833U;
unsigned short var_9 = (unsigned short)37871;
int var_10 = 1279682585;
unsigned long long int var_11 = 3582727118612850503ULL;
int zero = 0;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)14020;
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
