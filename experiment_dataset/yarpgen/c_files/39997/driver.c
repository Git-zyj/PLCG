#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)51345;
unsigned int var_12 = 1830268090U;
unsigned short var_13 = (unsigned short)62816;
int zero = 0;
unsigned long long int var_20 = 47754101611870381ULL;
_Bool var_21 = (_Bool)0;
long long int var_22 = -4449722546967011182LL;
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
