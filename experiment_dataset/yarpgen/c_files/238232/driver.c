#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -343536058;
short var_2 = (short)17843;
short var_3 = (short)15486;
unsigned long long int var_4 = 4360966952021897144ULL;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)54;
short var_11 = (short)19139;
int zero = 0;
unsigned char var_12 = (unsigned char)128;
int var_13 = -1168305955;
short var_14 = (short)9427;
unsigned short var_15 = (unsigned short)2440;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
