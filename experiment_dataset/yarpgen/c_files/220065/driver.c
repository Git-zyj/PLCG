#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 803372285U;
unsigned short var_2 = (unsigned short)34902;
long long int var_4 = 4919097718442709205LL;
unsigned short var_9 = (unsigned short)17589;
_Bool var_14 = (_Bool)1;
int zero = 0;
int var_16 = 985448250;
short var_17 = (short)-6180;
int var_18 = 231756621;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
