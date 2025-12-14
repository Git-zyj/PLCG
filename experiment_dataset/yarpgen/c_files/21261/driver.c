#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)24487;
unsigned long long int var_2 = 15892762053150956475ULL;
unsigned long long int var_5 = 7682602213752566361ULL;
unsigned long long int var_7 = 11095499464434812222ULL;
unsigned short var_8 = (unsigned short)58348;
int var_9 = -1096401888;
long long int var_11 = -7686796928611293778LL;
_Bool var_12 = (_Bool)0;
long long int var_13 = -2581906656307134753LL;
unsigned long long int var_14 = 233727471799830357ULL;
int zero = 0;
short var_15 = (short)3137;
unsigned short var_16 = (unsigned short)57323;
unsigned short var_17 = (unsigned short)5027;
unsigned short var_18 = (unsigned short)31170;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
