#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)-62;
signed char var_8 = (signed char)83;
unsigned int var_9 = 795836825U;
int zero = 0;
unsigned short var_13 = (unsigned short)28716;
_Bool var_14 = (_Bool)1;
unsigned int var_15 = 3631213814U;
unsigned int var_16 = 2828678924U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
