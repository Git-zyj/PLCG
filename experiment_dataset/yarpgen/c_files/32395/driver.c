#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)60734;
unsigned short var_6 = (unsigned short)49778;
signed char var_9 = (signed char)11;
int zero = 0;
unsigned short var_14 = (unsigned short)40194;
_Bool var_15 = (_Bool)0;
unsigned int var_16 = 2803308782U;
signed char var_17 = (signed char)36;
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
