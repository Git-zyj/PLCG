#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)21;
short var_13 = (short)31698;
_Bool var_15 = (_Bool)0;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned long long int var_20 = 419570123450928893ULL;
int var_21 = -1029967483;
void init() {
}

void checksum() {
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
