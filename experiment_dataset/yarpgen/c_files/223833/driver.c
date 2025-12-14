#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-12425;
long long int var_1 = -7373212293924985440LL;
long long int var_2 = -2732313674071658946LL;
unsigned short var_4 = (unsigned short)311;
short var_6 = (short)-28536;
int var_9 = 952702537;
unsigned int var_10 = 2150027205U;
int var_11 = 790537744;
short var_13 = (short)-21155;
unsigned int var_14 = 4221452902U;
int zero = 0;
long long int var_15 = 8339167312333252192LL;
long long int var_16 = 4121658389909198167LL;
int var_17 = -759921899;
unsigned int var_18 = 182508830U;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
