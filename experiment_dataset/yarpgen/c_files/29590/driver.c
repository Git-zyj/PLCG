#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 1058739704747268950LL;
signed char var_1 = (signed char)47;
int var_3 = -661345988;
int var_4 = 1692469564;
long long int var_6 = 6884650995816266502LL;
signed char var_7 = (signed char)-116;
int var_9 = -1845981081;
unsigned short var_10 = (unsigned short)4805;
unsigned int var_11 = 4145757627U;
int zero = 0;
unsigned short var_12 = (unsigned short)53210;
signed char var_13 = (signed char)-80;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
