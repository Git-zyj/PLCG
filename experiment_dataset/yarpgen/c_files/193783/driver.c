#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
short var_1 = (short)-29797;
int var_2 = -1524426496;
short var_3 = (short)21017;
unsigned char var_4 = (unsigned char)131;
long long int var_6 = 5084258687274580632LL;
unsigned char var_8 = (unsigned char)181;
short var_10 = (short)8600;
long long int var_15 = -3574009848977456205LL;
int zero = 0;
short var_16 = (short)13288;
unsigned int var_17 = 1900586945U;
long long int var_18 = 6654596396959422706LL;
unsigned char var_19 = (unsigned char)176;
long long int var_20 = 2241634615389759777LL;
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
