#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)127;
unsigned int var_8 = 270402513U;
long long int var_9 = 2018803718776338585LL;
unsigned char var_10 = (unsigned char)149;
int zero = 0;
int var_16 = -1214072320;
unsigned short var_17 = (unsigned short)18125;
unsigned char var_18 = (unsigned char)140;
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
