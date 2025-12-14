#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
long long int var_6 = -2351798124284307934LL;
int var_7 = -1175510087;
unsigned long long int var_10 = 2377288203089841875ULL;
unsigned short var_11 = (unsigned short)57276;
int var_13 = -701642202;
int zero = 0;
int var_15 = 979740181;
int var_16 = 1271985055;
unsigned short var_17 = (unsigned short)29024;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
