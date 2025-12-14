#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)33;
_Bool var_1 = (_Bool)0;
unsigned short var_4 = (unsigned short)57179;
unsigned char var_13 = (unsigned char)189;
int zero = 0;
unsigned long long int var_14 = 13961643872847277246ULL;
unsigned int var_15 = 1000347713U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
