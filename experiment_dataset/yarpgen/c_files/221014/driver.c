#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)9090;
long long int var_4 = 206238682824026201LL;
unsigned long long int var_11 = 13665158587645362722ULL;
int zero = 0;
unsigned char var_12 = (unsigned char)142;
unsigned short var_13 = (unsigned short)16699;
unsigned short var_14 = (unsigned short)17590;
_Bool var_15 = (_Bool)1;
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
