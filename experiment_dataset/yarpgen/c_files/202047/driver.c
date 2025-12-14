#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
int var_6 = 509114099;
short var_8 = (short)-22127;
int var_9 = -1155581233;
short var_10 = (short)-26685;
unsigned long long int var_12 = 15553143872945040977ULL;
unsigned short var_14 = (unsigned short)58375;
_Bool var_16 = (_Bool)1;
long long int var_18 = -1862390115471371277LL;
int zero = 0;
long long int var_19 = 2163892492545338064LL;
long long int var_20 = -4900416568559795106LL;
int var_21 = 1338367907;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
