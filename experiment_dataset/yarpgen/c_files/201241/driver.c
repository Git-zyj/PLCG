#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 3919068851917089231LL;
unsigned int var_4 = 317551114U;
unsigned short var_7 = (unsigned short)9963;
unsigned short var_9 = (unsigned short)45077;
unsigned int var_10 = 2943543931U;
unsigned int var_11 = 4292387703U;
short var_14 = (short)-14670;
int zero = 0;
short var_19 = (short)-23598;
int var_20 = -797939465;
int var_21 = 1893922376;
unsigned long long int var_22 = 9542177499165259691ULL;
unsigned long long int var_23 = 4032172182245356021ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
