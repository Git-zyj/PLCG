#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)2003;
signed char var_4 = (signed char)-118;
int var_9 = -961439259;
int zero = 0;
signed char var_14 = (signed char)29;
_Bool var_15 = (_Bool)1;
signed char var_16 = (signed char)-115;
signed char var_17 = (signed char)-24;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
