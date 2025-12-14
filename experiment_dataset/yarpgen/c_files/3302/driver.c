#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)57409;
unsigned char var_2 = (unsigned char)189;
unsigned char var_3 = (unsigned char)99;
_Bool var_6 = (_Bool)1;
unsigned int var_8 = 225595614U;
unsigned short var_10 = (unsigned short)20219;
long long int var_12 = 4655412483956346223LL;
unsigned short var_13 = (unsigned short)13851;
unsigned short var_15 = (unsigned short)9118;
int zero = 0;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-31;
signed char var_19 = (signed char)-22;
unsigned short var_20 = (unsigned short)8195;
signed char var_21 = (signed char)106;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
