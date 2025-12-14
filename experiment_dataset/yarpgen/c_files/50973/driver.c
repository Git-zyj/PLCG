#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)150;
signed char var_4 = (signed char)35;
unsigned int var_8 = 2335004756U;
unsigned short var_10 = (unsigned short)37230;
unsigned long long int var_12 = 2785287541881488184ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)95;
_Bool var_14 = (_Bool)0;
unsigned int var_15 = 157562880U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
