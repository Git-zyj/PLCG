#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-7318;
unsigned int var_1 = 3599996146U;
unsigned int var_5 = 1467194310U;
long long int var_6 = 9193858099210366718LL;
unsigned short var_7 = (unsigned short)36014;
int zero = 0;
unsigned int var_12 = 1620375632U;
_Bool var_13 = (_Bool)1;
signed char var_14 = (signed char)-82;
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
