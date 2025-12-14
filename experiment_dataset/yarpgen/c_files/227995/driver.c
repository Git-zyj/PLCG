#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)50;
short var_1 = (short)-22585;
unsigned long long int var_2 = 12267741721738415593ULL;
unsigned short var_4 = (unsigned short)46505;
long long int var_5 = -7739200604045368103LL;
unsigned short var_7 = (unsigned short)36882;
unsigned char var_8 = (unsigned char)15;
int zero = 0;
int var_13 = -1641957677;
_Bool var_14 = (_Bool)0;
signed char var_15 = (signed char)-19;
unsigned long long int var_16 = 12415211248960155288ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
