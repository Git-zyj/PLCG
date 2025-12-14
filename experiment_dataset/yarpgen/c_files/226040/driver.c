#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)41;
unsigned long long int var_1 = 13836314355972042579ULL;
short var_2 = (short)12372;
_Bool var_5 = (_Bool)1;
long long int var_6 = 8432246108947996277LL;
unsigned short var_7 = (unsigned short)45982;
int zero = 0;
unsigned char var_17 = (unsigned char)62;
unsigned char var_18 = (unsigned char)167;
_Bool var_19 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
