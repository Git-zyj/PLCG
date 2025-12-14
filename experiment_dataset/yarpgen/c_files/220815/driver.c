#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 16349413650981662340ULL;
short var_5 = (short)-19382;
long long int var_6 = 7498914079828631538LL;
short var_8 = (short)-18887;
unsigned long long int var_9 = 5717672213281383601ULL;
unsigned char var_10 = (unsigned char)78;
unsigned char var_12 = (unsigned char)65;
unsigned long long int var_15 = 1943625618116610507ULL;
int zero = 0;
short var_18 = (short)-17289;
unsigned long long int var_19 = 3018775704454333261ULL;
unsigned long long int var_20 = 1039449441023030704ULL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
