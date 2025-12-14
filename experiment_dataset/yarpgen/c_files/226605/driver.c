#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_5 = 10718593297870310633ULL;
signed char var_8 = (signed char)-5;
signed char var_9 = (signed char)-22;
signed char var_11 = (signed char)53;
_Bool var_12 = (_Bool)0;
int zero = 0;
unsigned char var_15 = (unsigned char)163;
unsigned char var_16 = (unsigned char)60;
unsigned char var_17 = (unsigned char)140;
void init() {
}

void checksum() {
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
