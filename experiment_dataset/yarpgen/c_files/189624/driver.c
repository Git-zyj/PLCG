#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60346;
signed char var_5 = (signed char)-102;
unsigned long long int var_9 = 7993142452962479202ULL;
int zero = 0;
short var_15 = (short)24326;
_Bool var_16 = (_Bool)0;
unsigned int var_17 = 2677835479U;
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
