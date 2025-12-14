#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 3102150605464132755ULL;
signed char var_8 = (signed char)-28;
unsigned int var_9 = 3269004056U;
unsigned long long int var_12 = 6633938158817055921ULL;
int zero = 0;
_Bool var_14 = (_Bool)1;
signed char var_15 = (signed char)76;
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
