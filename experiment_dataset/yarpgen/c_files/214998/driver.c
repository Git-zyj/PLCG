#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)250;
long long int var_6 = -7951892944503234991LL;
unsigned char var_8 = (unsigned char)17;
int var_11 = 1963462426;
int zero = 0;
unsigned long long int var_14 = 13865643491578142094ULL;
unsigned long long int var_15 = 11361422079622720154ULL;
_Bool var_16 = (_Bool)1;
short var_17 = (short)18259;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
