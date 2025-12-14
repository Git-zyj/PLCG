#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4226313198U;
unsigned long long int var_3 = 12204053780065026826ULL;
unsigned char var_7 = (unsigned char)110;
unsigned long long int var_8 = 1155095523718015703ULL;
short var_11 = (short)249;
unsigned int var_13 = 1619826570U;
int zero = 0;
unsigned long long int var_18 = 9008721629471062772ULL;
long long int var_19 = 4313818723602561163LL;
unsigned int var_20 = 471590590U;
unsigned long long int var_21 = 7772939359430017932ULL;
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
