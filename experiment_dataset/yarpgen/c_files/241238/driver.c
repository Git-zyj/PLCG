#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)20892;
unsigned short var_6 = (unsigned short)34033;
signed char var_7 = (signed char)-65;
int var_8 = 1299405237;
long long int var_9 = -4415475292211755929LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 1185625339U;
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
