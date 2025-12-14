#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)38;
signed char var_4 = (signed char)-85;
int var_7 = -682678515;
signed char var_9 = (signed char)10;
_Bool var_10 = (_Bool)0;
int zero = 0;
short var_12 = (short)-23960;
long long int var_13 = 6916010760798100882LL;
short var_14 = (short)21400;
signed char var_15 = (signed char)116;
unsigned short var_16 = (unsigned short)26462;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
