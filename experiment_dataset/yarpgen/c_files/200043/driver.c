#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_4 = (signed char)32;
unsigned char var_7 = (unsigned char)42;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned long long int var_19 = 12622770436682160356ULL;
long long int var_20 = 3754384443730440957LL;
void init() {
}

void checksum() {
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
