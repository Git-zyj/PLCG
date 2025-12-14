#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2544014462U;
_Bool var_5 = (_Bool)1;
signed char var_9 = (signed char)-42;
int zero = 0;
short var_10 = (short)21189;
signed char var_11 = (signed char)-64;
unsigned short var_12 = (unsigned short)38313;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
