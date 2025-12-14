#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9076005802673708144LL;
unsigned long long int var_3 = 9016085050244701227ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)47489;
_Bool var_14 = (_Bool)1;
long long int var_16 = 8270463182343641392LL;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)72;
int zero = 0;
signed char var_20 = (signed char)75;
unsigned short var_21 = (unsigned short)61141;
unsigned short var_22 = (unsigned short)50034;
short var_23 = (short)-23591;
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
