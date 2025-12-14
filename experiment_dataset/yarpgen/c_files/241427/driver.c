#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)46;
signed char var_3 = (signed char)78;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 3342041199U;
unsigned short var_15 = (unsigned short)29563;
int zero = 0;
unsigned int var_17 = 1925042682U;
signed char var_18 = (signed char)103;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
