#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4816582973897019603LL;
signed char var_2 = (signed char)-70;
long long int var_4 = -3500678510327051953LL;
signed char var_5 = (signed char)-80;
long long int var_6 = 7470156590132680886LL;
signed char var_7 = (signed char)72;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)59805;
int var_10 = 1614861558;
int zero = 0;
long long int var_11 = 9159240844780868916LL;
long long int var_12 = 7913329205639608231LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
