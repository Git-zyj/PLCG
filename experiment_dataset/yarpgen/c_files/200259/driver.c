#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1046781197188188830LL;
signed char var_2 = (signed char)48;
unsigned char var_5 = (unsigned char)106;
unsigned long long int var_6 = 12262736974201929568ULL;
unsigned long long int var_9 = 11399274102737310303ULL;
_Bool var_10 = (_Bool)0;
unsigned char var_11 = (unsigned char)10;
unsigned long long int var_14 = 9155538626023275652ULL;
unsigned long long int var_15 = 2980167756393093611ULL;
unsigned long long int var_16 = 13191016295579260642ULL;
unsigned short var_17 = (unsigned short)55266;
short var_18 = (short)-23584;
int zero = 0;
_Bool var_19 = (_Bool)0;
long long int var_20 = 625807061388666061LL;
unsigned short var_21 = (unsigned short)62341;
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
