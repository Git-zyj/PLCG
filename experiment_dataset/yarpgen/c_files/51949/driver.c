#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)37;
unsigned short var_1 = (unsigned short)23839;
long long int var_2 = 1570611380797927014LL;
unsigned short var_4 = (unsigned short)29993;
unsigned short var_5 = (unsigned short)21017;
signed char var_6 = (signed char)25;
unsigned short var_7 = (unsigned short)1594;
long long int var_8 = -3364883097725235345LL;
unsigned short var_10 = (unsigned short)27017;
unsigned short var_15 = (unsigned short)12099;
int zero = 0;
long long int var_16 = 7515785323421864808LL;
unsigned long long int var_17 = 5937970609890667743ULL;
unsigned short var_18 = (unsigned short)23966;
unsigned short var_19 = (unsigned short)33705;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
