#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7522181261234965946LL;
short var_5 = (short)-676;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_14 = -3052264173606075715LL;
unsigned long long int var_15 = 3996375187699156683ULL;
unsigned int var_16 = 2994331848U;
unsigned char var_17 = (unsigned char)186;
void init() {
}

void checksum() {
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
