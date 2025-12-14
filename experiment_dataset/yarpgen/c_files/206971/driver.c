#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -7000443316149768596LL;
unsigned int var_2 = 3798608941U;
int var_3 = -96207000;
unsigned long long int var_5 = 5710066071993863994ULL;
int var_7 = 1471583421;
unsigned int var_9 = 788022791U;
short var_10 = (short)21720;
unsigned char var_11 = (unsigned char)151;
unsigned long long int var_13 = 15907001575920158499ULL;
_Bool var_15 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)52550;
unsigned long long int var_17 = 1408444473803160234ULL;
short var_18 = (short)-3829;
void init() {
}

void checksum() {
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
