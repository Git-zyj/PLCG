#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_7 = (unsigned short)54300;
unsigned long long int var_8 = 5868533880266732840ULL;
unsigned long long int var_9 = 7674807815354510348ULL;
long long int var_11 = -5952660859645368224LL;
long long int var_12 = -2623082530526248621LL;
int zero = 0;
short var_15 = (short)-28507;
unsigned short var_16 = (unsigned short)11261;
unsigned short var_17 = (unsigned short)45062;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
