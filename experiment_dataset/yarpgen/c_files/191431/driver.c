#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 8877392266812386118LL;
unsigned short var_3 = (unsigned short)21181;
unsigned long long int var_4 = 5245124872019016947ULL;
long long int var_7 = -8070309885230839630LL;
unsigned int var_8 = 294089682U;
short var_10 = (short)-11051;
short var_13 = (short)-30404;
int zero = 0;
unsigned int var_17 = 2257054540U;
int var_18 = 825681955;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
