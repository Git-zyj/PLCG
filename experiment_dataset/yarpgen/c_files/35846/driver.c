#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 4134646929U;
unsigned int var_5 = 2476486633U;
unsigned int var_7 = 3793332839U;
signed char var_8 = (signed char)18;
signed char var_12 = (signed char)26;
int zero = 0;
unsigned int var_13 = 4177408720U;
_Bool var_14 = (_Bool)0;
void init() {
}

void checksum() {
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
