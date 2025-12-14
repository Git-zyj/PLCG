#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)25978;
unsigned int var_1 = 3822689543U;
unsigned char var_4 = (unsigned char)234;
unsigned long long int var_7 = 7879008808247462953ULL;
unsigned long long int var_8 = 1280649251227470146ULL;
_Bool var_10 = (_Bool)0;
long long int var_11 = 3692058553214065494LL;
int zero = 0;
unsigned int var_12 = 823816572U;
int var_13 = -1106878762;
_Bool var_14 = (_Bool)1;
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
