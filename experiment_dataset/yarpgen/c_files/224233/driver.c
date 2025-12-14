#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1294857176400781347LL;
unsigned long long int var_5 = 7009271877655281499ULL;
signed char var_6 = (signed char)11;
int var_15 = -153970873;
int var_16 = 1515529138;
int zero = 0;
unsigned long long int var_20 = 9968358744675772953ULL;
_Bool var_21 = (_Bool)0;
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
