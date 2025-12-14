#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 10577187422393622961ULL;
long long int var_1 = -4259361393589323031LL;
unsigned short var_2 = (unsigned short)50077;
signed char var_3 = (signed char)9;
unsigned char var_4 = (unsigned char)107;
unsigned long long int var_6 = 18107161582900882823ULL;
unsigned char var_7 = (unsigned char)104;
int var_9 = 171915922;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned char var_13 = (unsigned char)162;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
