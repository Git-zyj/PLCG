#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 511365353U;
short var_5 = (short)9767;
unsigned long long int var_9 = 7730559281098204555ULL;
unsigned char var_10 = (unsigned char)244;
unsigned long long int var_12 = 9479887735794057191ULL;
unsigned int var_13 = 1325332927U;
_Bool var_16 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned long long int var_19 = 14067090223023019538ULL;
unsigned short var_20 = (unsigned short)32210;
unsigned long long int var_21 = 5108076085660141644ULL;
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
