#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 13349206093091142352ULL;
int var_4 = 1394202198;
unsigned short var_7 = (unsigned short)20286;
_Bool var_8 = (_Bool)0;
int var_9 = 748961924;
int var_12 = -495720837;
_Bool var_17 = (_Bool)1;
int zero = 0;
int var_18 = 1072589354;
long long int var_19 = 601654182657164328LL;
int var_20 = -694270818;
long long int var_21 = 1332607977003304982LL;
unsigned int var_22 = 3747553887U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
