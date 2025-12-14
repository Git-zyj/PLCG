#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -837169134;
_Bool var_5 = (_Bool)1;
int var_7 = -1588925288;
signed char var_9 = (signed char)-108;
int var_12 = -253385335;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
unsigned long long int var_16 = 14127035428957483501ULL;
unsigned char var_18 = (unsigned char)248;
int zero = 0;
unsigned long long int var_19 = 13794834510232141314ULL;
int var_20 = 499484136;
_Bool var_21 = (_Bool)0;
_Bool var_22 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
