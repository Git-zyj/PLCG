#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)54738;
unsigned char var_1 = (unsigned char)188;
short var_4 = (short)9905;
_Bool var_7 = (_Bool)1;
unsigned int var_8 = 562341816U;
int zero = 0;
unsigned int var_13 = 640853865U;
unsigned short var_14 = (unsigned short)16117;
unsigned short var_15 = (unsigned short)32442;
short var_16 = (short)-29656;
signed char var_17 = (signed char)-17;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
