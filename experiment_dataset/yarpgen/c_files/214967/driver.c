#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 2554305232445796758ULL;
unsigned char var_1 = (unsigned char)32;
unsigned int var_4 = 1180532571U;
_Bool var_7 = (_Bool)1;
_Bool var_9 = (_Bool)1;
int zero = 0;
unsigned long long int var_14 = 18378523664208677676ULL;
signed char var_15 = (signed char)-79;
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
