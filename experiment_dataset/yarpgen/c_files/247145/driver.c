#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1363935761737429451LL;
long long int var_1 = -1434537298079079429LL;
unsigned int var_4 = 1270629155U;
_Bool var_6 = (_Bool)1;
unsigned char var_10 = (unsigned char)178;
unsigned long long int var_11 = 9639324819306284677ULL;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)17041;
signed char var_14 = (signed char)61;
int var_15 = -1761055612;
int zero = 0;
unsigned short var_18 = (unsigned short)22583;
unsigned long long int var_19 = 5359274644274486518ULL;
signed char var_20 = (signed char)-65;
void init() {
}

void checksum() {
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
