#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6086032674792990450LL;
long long int var_8 = 1669757024446275579LL;
int zero = 0;
signed char var_18 = (signed char)-47;
unsigned int var_19 = 253098136U;
long long int var_20 = -7026062110030393417LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
