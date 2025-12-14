#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)44267;
long long int var_1 = 3640405767049210180LL;
unsigned char var_2 = (unsigned char)185;
_Bool var_3 = (_Bool)1;
unsigned long long int var_4 = 342308402929450857ULL;
long long int var_7 = -3851400018966301193LL;
int var_8 = -440191006;
unsigned char var_10 = (unsigned char)230;
long long int var_11 = 8541929029279921998LL;
int zero = 0;
long long int var_13 = -614473404675632362LL;
int var_14 = -1319761147;
_Bool var_15 = (_Bool)1;
unsigned short var_16 = (unsigned short)16237;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
