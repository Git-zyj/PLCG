#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
int var_3 = -1416719432;
signed char var_9 = (signed char)94;
unsigned long long int var_16 = 5097500751847895612ULL;
int zero = 0;
signed char var_18 = (signed char)93;
unsigned short var_19 = (unsigned short)54138;
unsigned short var_20 = (unsigned short)29822;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
