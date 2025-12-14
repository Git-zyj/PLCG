#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17038685054101923836ULL;
long long int var_5 = -8575102508405983103LL;
unsigned long long int var_6 = 7162326564863376969ULL;
unsigned int var_7 = 3556350114U;
unsigned long long int var_8 = 18225036291648220974ULL;
unsigned int var_11 = 4275552194U;
unsigned int var_12 = 1349431727U;
long long int var_13 = -1008954281181197078LL;
signed char var_16 = (signed char)71;
unsigned long long int var_17 = 4362183523829212229ULL;
int zero = 0;
unsigned long long int var_18 = 11595342807205547680ULL;
unsigned int var_19 = 875970615U;
unsigned char var_20 = (unsigned char)225;
unsigned int var_21 = 3099301041U;
void init() {
}

void checksum() {
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
