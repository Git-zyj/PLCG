#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1542176784;
signed char var_6 = (signed char)47;
long long int var_7 = -3815253581093273703LL;
_Bool var_8 = (_Bool)1;
long long int var_9 = -3770434567724631725LL;
signed char var_10 = (signed char)-48;
unsigned char var_13 = (unsigned char)252;
int zero = 0;
unsigned short var_19 = (unsigned short)8203;
int var_20 = -386979506;
unsigned long long int var_21 = 916942069587922767ULL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
