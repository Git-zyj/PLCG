#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5516294757698735191ULL;
long long int var_3 = 6018870756396158179LL;
long long int var_4 = 5135280181733478207LL;
long long int var_5 = -6056979374048339630LL;
unsigned char var_7 = (unsigned char)147;
unsigned long long int var_9 = 3122100773678653823ULL;
unsigned short var_10 = (unsigned short)24367;
unsigned int var_11 = 2009429790U;
signed char var_12 = (signed char)-93;
long long int var_14 = 8863431839972642573LL;
short var_16 = (short)-30053;
long long int var_17 = -2982743355267411632LL;
long long int var_19 = 3497390956090222580LL;
int zero = 0;
signed char var_20 = (signed char)40;
short var_21 = (short)-9439;
long long int var_22 = 5183749710981773331LL;
unsigned int var_23 = 1866940667U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
