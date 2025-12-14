#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 700810117U;
long long int var_1 = 4406880132433584735LL;
unsigned int var_4 = 2964841331U;
int var_5 = -783225641;
unsigned int var_9 = 2972716230U;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)57;
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
