#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 5655944444779972450ULL;
signed char var_1 = (signed char)95;
unsigned long long int var_2 = 11687781000818030217ULL;
unsigned short var_3 = (unsigned short)16486;
unsigned char var_4 = (unsigned char)232;
signed char var_6 = (signed char)-62;
unsigned short var_7 = (unsigned short)61686;
unsigned short var_8 = (unsigned short)37190;
long long int var_9 = 5251669670568250687LL;
int zero = 0;
unsigned short var_12 = (unsigned short)56073;
unsigned char var_13 = (unsigned char)54;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
