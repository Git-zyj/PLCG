#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1764399710U;
unsigned long long int var_1 = 2740139309426209855ULL;
unsigned long long int var_2 = 10913657291507082466ULL;
unsigned long long int var_3 = 16669509186110736970ULL;
unsigned short var_5 = (unsigned short)4597;
unsigned long long int var_6 = 10300375279539217687ULL;
_Bool var_8 = (_Bool)0;
unsigned short var_9 = (unsigned short)35335;
_Bool var_10 = (_Bool)1;
unsigned short var_11 = (unsigned short)27050;
_Bool var_13 = (_Bool)1;
int zero = 0;
int var_14 = -896060258;
long long int var_15 = 4383212851468502302LL;
unsigned long long int var_16 = 2817664927128105634ULL;
int var_17 = -1001226625;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
