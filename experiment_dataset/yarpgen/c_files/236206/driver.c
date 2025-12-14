#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -1014053469749423852LL;
unsigned int var_4 = 424365154U;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)33112;
int zero = 0;
short var_11 = (short)-20998;
unsigned short var_12 = (unsigned short)11439;
_Bool var_13 = (_Bool)0;
unsigned long long int var_14 = 1007162639746976716ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
