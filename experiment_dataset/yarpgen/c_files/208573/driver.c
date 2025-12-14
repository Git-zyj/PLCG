#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)25985;
_Bool var_10 = (_Bool)1;
long long int var_12 = 8616222358527034644LL;
signed char var_14 = (signed char)-82;
unsigned int var_17 = 4292928228U;
int zero = 0;
unsigned short var_19 = (unsigned short)5810;
unsigned char var_20 = (unsigned char)46;
unsigned long long int var_21 = 2697154701555790794ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
