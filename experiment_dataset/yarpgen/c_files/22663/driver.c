#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-5015;
int var_1 = 382189551;
unsigned int var_4 = 1157848215U;
unsigned int var_8 = 2599040196U;
unsigned char var_11 = (unsigned char)223;
int zero = 0;
long long int var_13 = 7841863270152601523LL;
signed char var_14 = (signed char)-62;
unsigned short var_15 = (unsigned short)42405;
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
