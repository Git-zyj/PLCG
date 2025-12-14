#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)76;
unsigned long long int var_4 = 11145811220283909763ULL;
unsigned char var_5 = (unsigned char)243;
unsigned long long int var_6 = 15410076246158706868ULL;
unsigned long long int var_7 = 3700458329548900796ULL;
short var_9 = (short)32389;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned int var_20 = 1738934046U;
_Bool var_21 = (_Bool)1;
unsigned char var_22 = (unsigned char)199;
unsigned char var_23 = (unsigned char)139;
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
