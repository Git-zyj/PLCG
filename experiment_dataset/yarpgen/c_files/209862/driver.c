#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3529252989069627938LL;
signed char var_1 = (signed char)-94;
unsigned long long int var_2 = 11072607454874350816ULL;
signed char var_10 = (signed char)87;
signed char var_11 = (signed char)-64;
_Bool var_14 = (_Bool)0;
int var_15 = -559402003;
unsigned short var_16 = (unsigned short)37612;
short var_18 = (short)31964;
int zero = 0;
int var_20 = 835810934;
unsigned long long int var_21 = 14205842199043037212ULL;
unsigned char var_22 = (unsigned char)84;
signed char var_23 = (signed char)-2;
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
