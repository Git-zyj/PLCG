#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-60;
int var_2 = -1197630116;
signed char var_3 = (signed char)69;
int var_5 = -270432482;
unsigned char var_6 = (unsigned char)0;
unsigned short var_8 = (unsigned short)33344;
int zero = 0;
unsigned long long int var_10 = 13023520840224749185ULL;
unsigned short var_11 = (unsigned short)38252;
int var_12 = -944345319;
signed char var_13 = (signed char)-124;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
