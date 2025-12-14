#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned long long int var_5 = 15732303379057338783ULL;
long long int var_8 = -8240686595851164688LL;
signed char var_9 = (signed char)87;
int zero = 0;
unsigned long long int var_11 = 4095780024526696511ULL;
short var_12 = (short)25756;
unsigned long long int var_13 = 6683791469739422017ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
