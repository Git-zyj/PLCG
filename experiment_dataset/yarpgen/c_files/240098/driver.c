#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = -185223591;
long long int var_8 = -1418475881521767966LL;
unsigned long long int var_10 = 6774197167001617500ULL;
unsigned int var_11 = 641601788U;
unsigned int var_16 = 3416871941U;
unsigned int var_18 = 4127717668U;
long long int var_19 = 6848078628173768868LL;
int zero = 0;
unsigned short var_20 = (unsigned short)43418;
long long int var_21 = 8833933432728105852LL;
_Bool var_22 = (_Bool)0;
unsigned int var_23 = 2772903076U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
