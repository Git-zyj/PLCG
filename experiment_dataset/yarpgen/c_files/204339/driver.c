#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 14532257241918335195ULL;
unsigned int var_2 = 674473257U;
unsigned short var_3 = (unsigned short)31956;
unsigned int var_4 = 105003567U;
int var_6 = 887924453;
unsigned char var_8 = (unsigned char)153;
long long int var_11 = -7422011037637231735LL;
long long int var_12 = 4649116883678187898LL;
signed char var_15 = (signed char)24;
short var_16 = (short)31086;
int zero = 0;
unsigned short var_17 = (unsigned short)9051;
unsigned int var_18 = 602016251U;
short var_19 = (short)-13349;
signed char var_20 = (signed char)-121;
unsigned char var_21 = (unsigned char)221;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
