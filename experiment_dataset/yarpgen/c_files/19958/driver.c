#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 81768929498411501ULL;
int var_2 = -199752710;
unsigned short var_3 = (unsigned short)29938;
unsigned short var_5 = (unsigned short)16504;
unsigned char var_6 = (unsigned char)31;
long long int var_7 = -7586027676339866987LL;
unsigned short var_9 = (unsigned short)1636;
unsigned short var_10 = (unsigned short)56047;
long long int var_12 = 2246432034063576583LL;
unsigned short var_15 = (unsigned short)2509;
int zero = 0;
unsigned int var_16 = 778942290U;
unsigned short var_17 = (unsigned short)8324;
int var_18 = 1875471202;
unsigned short var_19 = (unsigned short)22717;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
