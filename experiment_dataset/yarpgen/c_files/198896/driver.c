#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 5231931919446453434ULL;
int var_3 = 359935198;
long long int var_5 = 5484855322081326519LL;
_Bool var_6 = (_Bool)0;
unsigned short var_8 = (unsigned short)29250;
unsigned long long int var_9 = 7671276436833948858ULL;
unsigned char var_11 = (unsigned char)56;
unsigned int var_12 = 2115382769U;
int zero = 0;
_Bool var_13 = (_Bool)0;
signed char var_14 = (signed char)-45;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
