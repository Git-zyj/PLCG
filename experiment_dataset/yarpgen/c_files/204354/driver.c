#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_1 = 17665256076323663485ULL;
int var_2 = 690434022;
long long int var_3 = 8052207622608129757LL;
unsigned char var_4 = (unsigned char)44;
unsigned short var_8 = (unsigned short)57788;
unsigned char var_10 = (unsigned char)176;
int var_11 = -46906335;
int var_15 = 213168605;
int zero = 0;
_Bool var_20 = (_Bool)0;
_Bool var_21 = (_Bool)1;
unsigned int var_22 = 413928306U;
long long int var_23 = -445288441951786709LL;
unsigned char var_24 = (unsigned char)187;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
