#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
unsigned short var_9 = (unsigned short)30844;
unsigned char var_10 = (unsigned char)91;
_Bool var_11 = (_Bool)1;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_18 = 9327842353561490239ULL;
signed char var_19 = (signed char)118;
unsigned long long int var_20 = 8086028764764806446ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
