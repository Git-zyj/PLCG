#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 7170270816611408497ULL;
long long int var_12 = -1271868671689895362LL;
long long int var_15 = -2092274198846666260LL;
long long int var_17 = -4207217297131814565LL;
int zero = 0;
unsigned short var_20 = (unsigned short)20151;
long long int var_21 = 3133280418970171085LL;
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
