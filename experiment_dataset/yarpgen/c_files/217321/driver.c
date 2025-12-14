#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1544618587;
signed char var_1 = (signed char)44;
short var_3 = (short)8576;
unsigned int var_8 = 957218824U;
unsigned int var_11 = 278430968U;
int zero = 0;
unsigned int var_12 = 2443675969U;
_Bool var_13 = (_Bool)0;
int var_14 = -1198744447;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
