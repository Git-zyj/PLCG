#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)95;
signed char var_5 = (signed char)86;
unsigned char var_9 = (unsigned char)189;
unsigned short var_12 = (unsigned short)32710;
int zero = 0;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)95;
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
