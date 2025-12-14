#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = 7104015970174251918LL;
_Bool var_16 = (_Bool)1;
unsigned char var_18 = (unsigned char)167;
int zero = 0;
unsigned long long int var_19 = 9085432108258317390ULL;
_Bool var_20 = (_Bool)0;
unsigned long long int var_21 = 6107359859120828377ULL;
unsigned short var_22 = (unsigned short)19792;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
