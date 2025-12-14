#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 572700401U;
_Bool var_4 = (_Bool)0;
unsigned int var_6 = 3804863377U;
short var_9 = (short)-5189;
unsigned char var_10 = (unsigned char)208;
short var_13 = (short)-31821;
short var_16 = (short)14545;
int zero = 0;
unsigned char var_17 = (unsigned char)192;
unsigned char var_18 = (unsigned char)49;
unsigned short var_19 = (unsigned short)56449;
short var_20 = (short)-12372;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
