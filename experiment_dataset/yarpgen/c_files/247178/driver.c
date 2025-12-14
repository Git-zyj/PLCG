#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned int var_9 = 1890844217U;
signed char var_10 = (signed char)-2;
short var_12 = (short)5194;
int zero = 0;
_Bool var_17 = (_Bool)0;
long long int var_18 = 3090770493762306032LL;
unsigned int var_19 = 2297479107U;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
