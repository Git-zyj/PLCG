#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_4 = -4559943730626434406LL;
int var_5 = -1036373167;
unsigned long long int var_7 = 9291417070469037721ULL;
_Bool var_11 = (_Bool)0;
unsigned long long int var_12 = 3692963927088391191ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)80;
unsigned int var_17 = 651500294U;
short var_18 = (short)29498;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)27;
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
