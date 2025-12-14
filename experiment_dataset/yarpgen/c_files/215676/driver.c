#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -817474276;
short var_4 = (short)14147;
unsigned char var_6 = (unsigned char)199;
unsigned int var_8 = 2436328135U;
unsigned long long int var_12 = 7013047561489074396ULL;
long long int var_14 = -9216800951570290288LL;
int zero = 0;
int var_16 = 1216910091;
unsigned long long int var_17 = 14334067885196295094ULL;
unsigned long long int var_18 = 15837290337795884049ULL;
unsigned int var_19 = 4242772334U;
_Bool var_20 = (_Bool)1;
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
