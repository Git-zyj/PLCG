#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 974423128110775468LL;
long long int var_4 = 2198676378676867025LL;
unsigned short var_5 = (unsigned short)55033;
unsigned short var_7 = (unsigned short)37364;
unsigned short var_8 = (unsigned short)10387;
long long int var_9 = 4769042282040103132LL;
long long int var_10 = -5979844785495822903LL;
long long int var_11 = -257046523427987382LL;
unsigned short var_12 = (unsigned short)36212;
long long int var_13 = -7465054273309225382LL;
long long int var_15 = 5611119318001288096LL;
long long int var_16 = -8473537973469313470LL;
int zero = 0;
unsigned short var_17 = (unsigned short)36812;
long long int var_18 = -8683043851742730485LL;
unsigned short var_19 = (unsigned short)29586;
long long int var_20 = 5420412697012824600LL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
