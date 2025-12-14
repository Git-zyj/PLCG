#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 11855446718840448217ULL;
_Bool var_4 = (_Bool)0;
long long int var_5 = 781016050088291890LL;
unsigned long long int var_6 = 5590314574988808808ULL;
unsigned char var_14 = (unsigned char)153;
unsigned short var_16 = (unsigned short)31324;
unsigned short var_18 = (unsigned short)61839;
int zero = 0;
short var_20 = (short)-5039;
short var_21 = (short)30729;
void init() {
}

void checksum() {
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
