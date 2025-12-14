#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -918597260;
unsigned long long int var_5 = 8596646106474879173ULL;
short var_7 = (short)23733;
int var_9 = -179342183;
unsigned short var_10 = (unsigned short)39801;
unsigned int var_12 = 3495325525U;
unsigned short var_16 = (unsigned short)38915;
int zero = 0;
short var_17 = (short)2854;
unsigned short var_18 = (unsigned short)65394;
_Bool var_19 = (_Bool)0;
int var_20 = 580159416;
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
