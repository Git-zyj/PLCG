#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = 4341886630697776282LL;
signed char var_9 = (signed char)-108;
_Bool var_10 = (_Bool)0;
int zero = 0;
signed char var_18 = (signed char)33;
signed char var_19 = (signed char)-51;
void init() {
}

void checksum() {
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
