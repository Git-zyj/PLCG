#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)47;
_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-2;
unsigned short var_5 = (unsigned short)19318;
unsigned short var_9 = (unsigned short)4364;
long long int var_10 = 7727158679814300651LL;
long long int var_11 = 472241182889047079LL;
signed char var_13 = (signed char)-54;
short var_14 = (short)-14477;
int var_15 = 2015687231;
int zero = 0;
long long int var_17 = -7591176511218769009LL;
int var_18 = 709822377;
unsigned int var_19 = 3784405365U;
long long int var_20 = -7609307812666515424LL;
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
