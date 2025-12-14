#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)169;
long long int var_2 = 2382028103976311657LL;
short var_4 = (short)-14127;
unsigned long long int var_5 = 6924093600532170279ULL;
long long int var_7 = -9068827319392567290LL;
unsigned short var_8 = (unsigned short)58684;
signed char var_9 = (signed char)48;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned char var_16 = (unsigned char)244;
signed char var_17 = (signed char)-71;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 361922784U;
int var_20 = -1388832792;
unsigned int var_21 = 2021319190U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
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
