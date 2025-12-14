#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)11787;
long long int var_5 = -8191006424612866412LL;
_Bool var_9 = (_Bool)0;
int zero = 0;
int var_13 = 2048122801;
short var_14 = (short)18700;
unsigned int var_15 = 988618072U;
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
