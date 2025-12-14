#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)20726;
_Bool var_3 = (_Bool)1;
int var_8 = -1230151278;
short var_10 = (short)32152;
int var_11 = -327236391;
signed char var_12 = (signed char)77;
unsigned long long int var_13 = 13494014078950148668ULL;
unsigned long long int var_14 = 16377626725312970769ULL;
unsigned long long int var_15 = 5679989936785635687ULL;
int zero = 0;
short var_16 = (short)10872;
_Bool var_17 = (_Bool)1;
short var_18 = (short)4325;
_Bool var_19 = (_Bool)1;
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
