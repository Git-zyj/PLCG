#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)48337;
unsigned char var_1 = (unsigned char)134;
long long int var_6 = 1031055525619256370LL;
signed char var_7 = (signed char)2;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_12 = (signed char)-56;
long long int var_13 = 8229471543098187814LL;
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
