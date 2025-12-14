#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)113;
long long int var_1 = -1910410558696260711LL;
long long int var_3 = -1208806130427272146LL;
_Bool var_6 = (_Bool)0;
long long int var_7 = -2808504090998116388LL;
_Bool var_9 = (_Bool)1;
long long int var_10 = -5930519386699950481LL;
unsigned char var_11 = (unsigned char)136;
unsigned short var_13 = (unsigned short)29116;
int zero = 0;
unsigned int var_16 = 3648007414U;
short var_17 = (short)-12529;
void init() {
}

void checksum() {
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
