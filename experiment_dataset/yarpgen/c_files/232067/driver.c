#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -8872077405384647573LL;
signed char var_1 = (signed char)59;
signed char var_13 = (signed char)58;
unsigned short var_14 = (unsigned short)3458;
int zero = 0;
_Bool var_16 = (_Bool)0;
unsigned long long int var_17 = 8287515065280773373ULL;
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
