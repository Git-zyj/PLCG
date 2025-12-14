#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17203631284730368845ULL;
_Bool var_3 = (_Bool)1;
unsigned int var_4 = 95326302U;
_Bool var_6 = (_Bool)1;
long long int var_7 = 1197608545000620299LL;
short var_8 = (short)-24098;
unsigned long long int var_11 = 4997604797242262204ULL;
int zero = 0;
long long int var_12 = -7471380575994079115LL;
short var_13 = (short)12723;
unsigned short var_14 = (unsigned short)16504;
unsigned short var_15 = (unsigned short)18851;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
