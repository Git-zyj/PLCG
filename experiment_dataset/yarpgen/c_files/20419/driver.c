#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
long long int var_2 = 55256410655658175LL;
long long int var_3 = -1360180427042134503LL;
unsigned long long int var_7 = 6279965546302900235ULL;
unsigned short var_10 = (unsigned short)7575;
signed char var_14 = (signed char)59;
short var_15 = (short)3324;
_Bool var_16 = (_Bool)1;
unsigned long long int var_18 = 13554470611276803903ULL;
int zero = 0;
long long int var_20 = -2667131861539952040LL;
unsigned int var_21 = 111279688U;
unsigned long long int var_22 = 4836346855976889470ULL;
short var_23 = (short)26421;
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
