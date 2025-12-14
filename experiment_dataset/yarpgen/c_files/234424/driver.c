#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60791;
short var_1 = (short)-1140;
short var_2 = (short)24570;
unsigned short var_3 = (unsigned short)9666;
unsigned short var_5 = (unsigned short)48664;
long long int var_6 = -1417929290345036405LL;
int zero = 0;
unsigned short var_11 = (unsigned short)39726;
unsigned long long int var_12 = 15746577212342836673ULL;
unsigned long long int var_13 = 18094573127921862453ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
