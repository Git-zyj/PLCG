#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 1595580083975938587ULL;
unsigned long long int var_3 = 3430005315625381778ULL;
unsigned int var_4 = 3957637254U;
unsigned int var_5 = 688373988U;
long long int var_7 = 4084071862817738622LL;
unsigned long long int var_10 = 13980697044951257236ULL;
unsigned long long int var_11 = 12275389510701427264ULL;
long long int var_13 = 1401149743541297548LL;
int zero = 0;
_Bool var_14 = (_Bool)1;
int var_15 = -1886002060;
void init() {
}

void checksum() {
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
