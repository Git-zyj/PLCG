#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 345390467U;
unsigned long long int var_7 = 2329109818956979280ULL;
unsigned char var_8 = (unsigned char)233;
int var_10 = -129450768;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-35;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
