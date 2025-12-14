#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-25879;
short var_1 = (short)13196;
_Bool var_4 = (_Bool)0;
long long int var_5 = -7671340574055260054LL;
int var_6 = 1043644338;
int var_7 = 1074586341;
int zero = 0;
_Bool var_15 = (_Bool)1;
long long int var_16 = -757326177935671672LL;
signed char var_17 = (signed char)16;
unsigned long long int var_18 = 10157285547982098753ULL;
unsigned short var_19 = (unsigned short)62930;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
