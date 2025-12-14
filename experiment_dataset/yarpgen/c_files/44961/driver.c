#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 2064955428;
short var_1 = (short)-358;
unsigned char var_3 = (unsigned char)64;
short var_4 = (short)199;
unsigned long long int var_5 = 1491536611438994474ULL;
unsigned long long int var_7 = 16823991668432534606ULL;
_Bool var_9 = (_Bool)1;
int zero = 0;
short var_10 = (short)14535;
int var_11 = 1792435820;
long long int var_12 = 3351199607263292262LL;
int var_13 = -1768699259;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
