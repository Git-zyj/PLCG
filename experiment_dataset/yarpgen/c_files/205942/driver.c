#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -544167262253170495LL;
_Bool var_4 = (_Bool)1;
_Bool var_8 = (_Bool)1;
short var_12 = (short)-6724;
short var_13 = (short)5405;
unsigned long long int var_15 = 3115586251318596017ULL;
int zero = 0;
unsigned int var_17 = 2342198154U;
unsigned char var_18 = (unsigned char)12;
short var_19 = (short)9091;
long long int var_20 = -1528310626613228902LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
