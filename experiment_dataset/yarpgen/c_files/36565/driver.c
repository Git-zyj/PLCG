#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 803854031U;
int var_7 = 88075474;
short var_10 = (short)16982;
int zero = 0;
signed char var_12 = (signed char)57;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-49;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
