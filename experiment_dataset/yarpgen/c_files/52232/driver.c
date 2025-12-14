#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)21;
unsigned long long int var_4 = 9498176690799733912ULL;
unsigned int var_5 = 1628059995U;
long long int var_6 = 3248737782689548380LL;
unsigned char var_7 = (unsigned char)204;
unsigned char var_8 = (unsigned char)104;
unsigned long long int var_11 = 6714472095747787189ULL;
long long int var_14 = -1232239564707304608LL;
int zero = 0;
unsigned long long int var_15 = 7543769712153538857ULL;
long long int var_16 = 252000926944079473LL;
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
