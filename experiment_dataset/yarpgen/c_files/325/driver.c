#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_5 = 6380683843819830769LL;
_Bool var_6 = (_Bool)1;
unsigned long long int var_7 = 2402362516027702685ULL;
long long int var_9 = 3971913236204020491LL;
unsigned long long int var_12 = 7311803218369287901ULL;
int zero = 0;
short var_13 = (short)-15558;
unsigned long long int var_14 = 1002299894120298206ULL;
short var_15 = (short)24485;
long long int var_16 = 9054684072832227643LL;
unsigned long long int var_17 = 12966278064689619880ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
