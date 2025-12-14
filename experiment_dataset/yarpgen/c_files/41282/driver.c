#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1255544345270035275LL;
long long int var_3 = -6094280798979821685LL;
int var_4 = 1168088700;
unsigned short var_5 = (unsigned short)21555;
long long int var_9 = -4994584469347792701LL;
unsigned short var_12 = (unsigned short)56633;
int zero = 0;
long long int var_14 = -2817283262650956397LL;
short var_15 = (short)-23278;
long long int var_16 = -9131862837044339399LL;
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
