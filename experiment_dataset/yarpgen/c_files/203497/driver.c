#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 339713703U;
unsigned char var_4 = (unsigned char)32;
_Bool var_5 = (_Bool)0;
long long int var_7 = -4429096596511434572LL;
int zero = 0;
unsigned int var_11 = 3990117239U;
unsigned short var_12 = (unsigned short)34795;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
