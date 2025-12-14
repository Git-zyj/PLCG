#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_7 = 125466432;
short var_9 = (short)-4153;
unsigned short var_10 = (unsigned short)49288;
long long int var_11 = 1731914966451434971LL;
unsigned short var_12 = (unsigned short)47180;
int zero = 0;
unsigned long long int var_14 = 12370460829569901338ULL;
_Bool var_15 = (_Bool)0;
unsigned long long int var_16 = 8716164550978464114ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
