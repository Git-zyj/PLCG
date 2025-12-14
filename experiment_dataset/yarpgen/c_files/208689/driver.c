#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 2125454522U;
unsigned int var_6 = 328812331U;
unsigned char var_8 = (unsigned char)117;
unsigned int var_9 = 2362323802U;
unsigned char var_10 = (unsigned char)97;
unsigned char var_11 = (unsigned char)115;
long long int var_12 = -4773576681111431149LL;
unsigned int var_13 = 1218758313U;
long long int var_15 = -6950675836733600980LL;
int zero = 0;
long long int var_16 = 1040979883333254954LL;
unsigned short var_17 = (unsigned short)58504;
long long int var_18 = 4939310391024631237LL;
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
