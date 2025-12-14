#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 1475838263U;
long long int var_5 = 3347691281948682237LL;
_Bool var_6 = (_Bool)0;
short var_9 = (short)-8032;
unsigned long long int var_10 = 1824007327650038667ULL;
_Bool var_12 = (_Bool)1;
int zero = 0;
long long int var_15 = 4317553195330341056LL;
int var_16 = -758989514;
unsigned short var_17 = (unsigned short)25452;
void init() {
}

void checksum() {
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
