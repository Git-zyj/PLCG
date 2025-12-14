#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = -1483605714532447701LL;
long long int var_14 = 9188885160477267507LL;
short var_16 = (short)32145;
int zero = 0;
signed char var_18 = (signed char)106;
unsigned long long int var_19 = 5190426480407977972ULL;
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
