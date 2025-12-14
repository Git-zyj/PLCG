#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1318797219;
unsigned long long int var_2 = 8364494294539826215ULL;
unsigned long long int var_4 = 6331977688925676815ULL;
unsigned long long int var_7 = 3331829346771691927ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_11 = (unsigned char)222;
unsigned long long int var_13 = 17333831698605854632ULL;
unsigned char var_14 = (unsigned char)231;
int zero = 0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)54;
unsigned long long int var_17 = 2059690155192141096ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
