#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)29;
_Bool var_10 = (_Bool)1;
int var_11 = -223790058;
int zero = 0;
int var_12 = -473225862;
unsigned int var_13 = 4136328118U;
int var_14 = 164244657;
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
