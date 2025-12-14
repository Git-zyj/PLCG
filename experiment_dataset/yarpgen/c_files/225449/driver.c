#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 542885945894265914LL;
unsigned long long int var_4 = 1638119869078324344ULL;
unsigned long long int var_5 = 11386133791962692362ULL;
unsigned long long int var_6 = 18209571572192579025ULL;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)34949;
int zero = 0;
_Bool var_16 = (_Bool)1;
long long int var_17 = 2382231589872554571LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
