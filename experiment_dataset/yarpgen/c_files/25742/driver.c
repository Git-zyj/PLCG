#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)1;
long long int var_12 = -5241613660976141681LL;
int var_15 = -1927561156;
int zero = 0;
int var_16 = 846859904;
long long int var_17 = 5862568213342849052LL;
long long int var_18 = 4338636216373855468LL;
unsigned short var_19 = (unsigned short)9473;
int var_20 = -1795009743;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
