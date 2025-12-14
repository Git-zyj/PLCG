#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned int var_3 = 1210862313U;
_Bool var_4 = (_Bool)1;
unsigned int var_6 = 2484279899U;
signed char var_7 = (signed char)-52;
_Bool var_8 = (_Bool)0;
unsigned int var_10 = 1151199248U;
unsigned long long int var_11 = 8012938801545878879ULL;
long long int var_12 = -5531178869764718910LL;
short var_13 = (short)29705;
int zero = 0;
int var_15 = -831457057;
long long int var_16 = -694561833283651036LL;
unsigned int var_17 = 417386917U;
int var_18 = 186531988;
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
