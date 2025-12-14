#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_12 = (signed char)-13;
signed char var_14 = (signed char)-56;
int zero = 0;
unsigned int var_16 = 2394884706U;
signed char var_17 = (signed char)88;
_Bool var_18 = (_Bool)1;
unsigned short var_19 = (unsigned short)36084;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
