#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1979779039;
_Bool var_3 = (_Bool)0;
short var_7 = (short)-27858;
short var_9 = (short)20220;
int var_10 = 1647182180;
unsigned long long int var_13 = 1530499583729997778ULL;
long long int var_15 = 8976286682968818901LL;
int zero = 0;
_Bool var_16 = (_Bool)0;
signed char var_17 = (signed char)32;
void init() {
}

void checksum() {
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
