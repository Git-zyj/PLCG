#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)116;
unsigned int var_3 = 699557370U;
long long int var_7 = -326617730991325337LL;
_Bool var_10 = (_Bool)1;
unsigned short var_12 = (unsigned short)29435;
unsigned int var_14 = 1602016665U;
int zero = 0;
int var_16 = -1028826682;
unsigned long long int var_17 = 10095124732212460400ULL;
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
