#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8468305710880456508ULL;
unsigned short var_1 = (unsigned short)60758;
unsigned long long int var_2 = 5400592726035964187ULL;
unsigned char var_3 = (unsigned char)191;
int var_4 = 1330589285;
int var_6 = 509290023;
int zero = 0;
unsigned long long int var_10 = 9814680489424593544ULL;
unsigned short var_11 = (unsigned short)49964;
_Bool var_12 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
