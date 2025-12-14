#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
short var_2 = (short)14647;
unsigned short var_3 = (unsigned short)45985;
unsigned long long int var_4 = 10013035942771069076ULL;
unsigned short var_7 = (unsigned short)38764;
unsigned char var_8 = (unsigned char)199;
unsigned int var_9 = 2340713802U;
short var_10 = (short)11748;
int zero = 0;
unsigned int var_11 = 3010110011U;
unsigned int var_12 = 850833609U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
