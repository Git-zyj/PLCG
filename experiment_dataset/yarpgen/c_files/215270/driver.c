#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-99;
unsigned long long int var_2 = 2747519342254921035ULL;
_Bool var_3 = (_Bool)0;
short var_6 = (short)-2812;
unsigned char var_9 = (unsigned char)209;
_Bool var_10 = (_Bool)0;
unsigned long long int var_12 = 4347786823545719451ULL;
int zero = 0;
unsigned short var_13 = (unsigned short)45569;
short var_14 = (short)11944;
short var_15 = (short)26353;
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
