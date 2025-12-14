#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)9511;
short var_3 = (short)12145;
unsigned long long int var_5 = 15224798662184121730ULL;
unsigned int var_6 = 449759004U;
unsigned char var_8 = (unsigned char)66;
unsigned long long int var_9 = 12070092370115074271ULL;
int zero = 0;
long long int var_15 = 6995960293006580826LL;
int var_16 = -1029297986;
void init() {
}

void checksum() {
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
