#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_4 = (_Bool)1;
unsigned int var_5 = 4096993962U;
int var_6 = 399908462;
signed char var_8 = (signed char)92;
long long int var_9 = -2908804910984428301LL;
int var_10 = -1070159245;
_Bool var_11 = (_Bool)1;
int zero = 0;
int var_12 = -1226596627;
signed char var_13 = (signed char)-107;
int var_14 = 1244903409;
short var_15 = (short)14614;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
