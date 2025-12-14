#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 12579589689137924986ULL;
signed char var_2 = (signed char)-3;
_Bool var_5 = (_Bool)1;
unsigned char var_9 = (unsigned char)208;
short var_11 = (short)24843;
int zero = 0;
unsigned long long int var_12 = 8259275908584611993ULL;
unsigned long long int var_13 = 11622193107480262824ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
