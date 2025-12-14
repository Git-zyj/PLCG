#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-6276;
signed char var_1 = (signed char)-30;
unsigned long long int var_2 = 2590414345302097322ULL;
signed char var_3 = (signed char)112;
unsigned long long int var_4 = 6238733333673781999ULL;
short var_6 = (short)-21417;
signed char var_8 = (signed char)62;
unsigned char var_9 = (unsigned char)26;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = -364942099212346327LL;
unsigned short var_12 = (unsigned short)55612;
unsigned long long int var_13 = 4568553540719337253ULL;
unsigned short var_14 = (unsigned short)30872;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
