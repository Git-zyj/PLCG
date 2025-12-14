#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)32;
unsigned short var_3 = (unsigned short)5667;
short var_4 = (short)-30417;
unsigned int var_6 = 2396608781U;
unsigned char var_7 = (unsigned char)236;
int var_8 = 1712106515;
signed char var_9 = (signed char)-85;
unsigned int var_10 = 2487856367U;
_Bool var_11 = (_Bool)0;
int zero = 0;
_Bool var_12 = (_Bool)0;
unsigned long long int var_13 = 6464264585737200296ULL;
unsigned int var_14 = 2922545481U;
unsigned short var_15 = (unsigned short)19913;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
