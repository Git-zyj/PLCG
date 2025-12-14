#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)22202;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 1212179078U;
_Bool var_7 = (_Bool)1;
unsigned char var_8 = (unsigned char)185;
unsigned char var_9 = (unsigned char)176;
int zero = 0;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)34436;
unsigned int var_14 = 2023447165U;
void init() {
}

void checksum() {
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
