#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-80;
unsigned long long int var_9 = 10053179392013894228ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
_Bool var_20 = (_Bool)0;
short var_21 = (short)-19961;
unsigned long long int var_22 = 1586392496939308764ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
