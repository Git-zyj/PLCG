#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
signed char var_2 = (signed char)28;
int var_5 = -1865018577;
unsigned char var_6 = (unsigned char)64;
signed char var_10 = (signed char)-69;
long long int var_13 = 3155321405640163659LL;
int zero = 0;
unsigned int var_20 = 4029993509U;
_Bool var_21 = (_Bool)0;
unsigned int var_22 = 315806319U;
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
