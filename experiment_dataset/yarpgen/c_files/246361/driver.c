#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)62305;
unsigned long long int var_2 = 10146266290411926377ULL;
unsigned long long int var_4 = 18001445360378243089ULL;
short var_5 = (short)21342;
short var_8 = (short)-5189;
int zero = 0;
unsigned long long int var_10 = 13301377800393901208ULL;
unsigned int var_11 = 620291478U;
short var_12 = (short)32224;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
