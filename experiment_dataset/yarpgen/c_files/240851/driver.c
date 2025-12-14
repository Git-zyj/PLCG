#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)157;
unsigned short var_3 = (unsigned short)3414;
long long int var_9 = -418637692223999489LL;
long long int var_11 = -1953627263703626875LL;
short var_13 = (short)19016;
unsigned long long int var_14 = 12166469978578401179ULL;
long long int var_15 = -4660410978893047707LL;
int zero = 0;
unsigned short var_16 = (unsigned short)33126;
unsigned long long int var_17 = 7499278831555649915ULL;
unsigned int var_18 = 2999737446U;
long long int var_19 = -4471289429617008003LL;
long long int var_20 = 577989250189870080LL;
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
