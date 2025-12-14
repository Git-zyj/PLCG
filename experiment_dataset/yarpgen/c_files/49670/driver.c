#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 854638639;
unsigned long long int var_1 = 12171589162851374459ULL;
_Bool var_3 = (_Bool)0;
signed char var_5 = (signed char)37;
signed char var_6 = (signed char)16;
_Bool var_11 = (_Bool)1;
int zero = 0;
signed char var_16 = (signed char)-111;
unsigned char var_17 = (unsigned char)191;
unsigned short var_18 = (unsigned short)35138;
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
