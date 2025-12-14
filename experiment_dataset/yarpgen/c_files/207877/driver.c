#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1367074687U;
long long int var_1 = 3939581529682909093LL;
unsigned long long int var_2 = 11753182839885989021ULL;
int var_4 = -2075875553;
unsigned int var_5 = 1236886086U;
short var_8 = (short)-14756;
unsigned char var_9 = (unsigned char)86;
unsigned long long int var_12 = 15801809724644151459ULL;
unsigned int var_14 = 3870646552U;
signed char var_15 = (signed char)-9;
signed char var_17 = (signed char)21;
unsigned int var_18 = 419002006U;
unsigned int var_19 = 2743207888U;
int zero = 0;
long long int var_20 = -254390933003589030LL;
unsigned long long int var_21 = 7319655510416331652ULL;
unsigned short var_22 = (unsigned short)13412;
unsigned long long int var_23 = 5741783212713980187ULL;
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
