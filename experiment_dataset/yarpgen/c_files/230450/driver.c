#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)85;
unsigned char var_4 = (unsigned char)125;
unsigned long long int var_9 = 1453620527943426145ULL;
unsigned long long int var_16 = 15825723723698161884ULL;
int zero = 0;
unsigned char var_20 = (unsigned char)201;
unsigned char var_21 = (unsigned char)213;
_Bool var_22 = (_Bool)0;
short var_23 = (short)-20528;
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
