#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 6450385230528721435LL;
_Bool var_3 = (_Bool)1;
int var_4 = -1579738257;
long long int var_5 = -1161281670645273627LL;
_Bool var_6 = (_Bool)0;
int var_7 = 431282276;
_Bool var_10 = (_Bool)0;
int var_11 = 1610686499;
int zero = 0;
signed char var_12 = (signed char)-26;
long long int var_13 = 7144551783043471968LL;
unsigned char var_14 = (unsigned char)175;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
