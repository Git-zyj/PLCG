#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)121;
unsigned char var_4 = (unsigned char)116;
int var_5 = 1790546580;
unsigned long long int var_6 = 775106130132876133ULL;
unsigned char var_7 = (unsigned char)69;
short var_11 = (short)23282;
long long int var_13 = -60816867713374310LL;
int var_14 = -1556705730;
int zero = 0;
_Bool var_18 = (_Bool)1;
long long int var_19 = -7507982233314091390LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
