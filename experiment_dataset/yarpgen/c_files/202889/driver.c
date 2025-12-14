#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 481085368U;
unsigned int var_1 = 1869368344U;
unsigned char var_3 = (unsigned char)68;
unsigned char var_5 = (unsigned char)189;
int var_6 = -153553763;
int var_9 = -105489284;
int zero = 0;
_Bool var_14 = (_Bool)1;
long long int var_15 = 4266082844522245981LL;
int var_16 = 235437906;
unsigned short var_17 = (unsigned short)28756;
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
