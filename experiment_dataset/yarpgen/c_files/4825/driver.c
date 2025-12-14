#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 1664184846441653570ULL;
unsigned char var_2 = (unsigned char)206;
_Bool var_5 = (_Bool)1;
signed char var_7 = (signed char)-88;
int var_9 = 1043860476;
int var_11 = 2085778143;
unsigned long long int var_12 = 16620668497473423541ULL;
unsigned int var_14 = 1768322553U;
unsigned long long int var_17 = 10124266368372432226ULL;
unsigned long long int var_19 = 6891973003120648866ULL;
int zero = 0;
unsigned short var_20 = (unsigned short)61691;
unsigned int var_21 = 2967292985U;
unsigned int var_22 = 1307505260U;
_Bool var_23 = (_Bool)0;
signed char var_24 = (signed char)54;
unsigned int var_25 = 1690800011U;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
    hash(&seed, var_25);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
