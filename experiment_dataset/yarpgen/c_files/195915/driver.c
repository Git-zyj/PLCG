#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 8074237695533178386ULL;
signed char var_3 = (signed char)-102;
signed char var_6 = (signed char)-9;
unsigned int var_7 = 2744306808U;
_Bool var_8 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
int var_14 = -1467279843;
signed char var_15 = (signed char)9;
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
