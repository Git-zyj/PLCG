#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 4349798780302979751LL;
unsigned long long int var_3 = 5297681342002292970ULL;
signed char var_4 = (signed char)99;
unsigned char var_6 = (unsigned char)188;
unsigned long long int var_10 = 3049750239809173237ULL;
long long int var_12 = -1083016550082238084LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned short var_15 = (unsigned short)23930;
unsigned char var_16 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
