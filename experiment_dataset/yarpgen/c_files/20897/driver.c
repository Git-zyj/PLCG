#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2758563279U;
_Bool var_8 = (_Bool)1;
_Bool var_9 = (_Bool)1;
unsigned long long int var_12 = 17338400526606607677ULL;
int zero = 0;
long long int var_14 = -6018875510957953161LL;
long long int var_15 = -9127688494559495244LL;
void init() {
}

void checksum() {
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
