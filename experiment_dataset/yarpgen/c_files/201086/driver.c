#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -5855637507419738233LL;
unsigned long long int var_4 = 7571066624296512339ULL;
short var_6 = (short)14129;
unsigned long long int var_14 = 10708206552466446058ULL;
unsigned char var_15 = (unsigned char)255;
short var_18 = (short)-12305;
_Bool var_19 = (_Bool)0;
int zero = 0;
_Bool var_20 = (_Bool)1;
int var_21 = 1598950223;
long long int var_22 = 510818409598941297LL;
unsigned long long int var_23 = 17440206749377308024ULL;
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
