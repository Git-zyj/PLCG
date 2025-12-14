#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 309076345U;
long long int var_4 = 3642694305986858380LL;
long long int var_9 = -2390533139110310028LL;
signed char var_12 = (signed char)59;
long long int var_13 = 3715587637156235629LL;
int var_19 = -1248578983;
int zero = 0;
short var_20 = (short)13764;
int var_21 = -931127738;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
