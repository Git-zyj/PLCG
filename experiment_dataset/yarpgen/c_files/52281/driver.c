#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)186;
unsigned short var_2 = (unsigned short)43987;
unsigned char var_7 = (unsigned char)190;
_Bool var_14 = (_Bool)1;
unsigned short var_16 = (unsigned short)22939;
int zero = 0;
unsigned short var_18 = (unsigned short)46898;
short var_19 = (short)-30106;
short var_20 = (short)-27947;
unsigned int var_21 = 408285614U;
unsigned int var_22 = 1196409830U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
