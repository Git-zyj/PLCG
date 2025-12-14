#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)110;
signed char var_7 = (signed char)0;
unsigned short var_10 = (unsigned short)48203;
int var_11 = 2092953664;
int zero = 0;
unsigned char var_15 = (unsigned char)103;
int var_16 = -268405723;
signed char var_17 = (signed char)26;
_Bool var_18 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
