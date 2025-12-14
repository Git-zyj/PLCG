#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
unsigned long long int var_4 = 16359103256930748050ULL;
signed char var_9 = (signed char)-4;
long long int var_12 = 3036397461914904741LL;
int zero = 0;
short var_13 = (short)-9683;
signed char var_14 = (signed char)52;
unsigned int var_15 = 68452313U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
