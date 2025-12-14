#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)81;
unsigned long long int var_2 = 4403850633170139055ULL;
_Bool var_3 = (_Bool)1;
unsigned long long int var_11 = 12230982569396885160ULL;
unsigned short var_17 = (unsigned short)64756;
int zero = 0;
unsigned long long int var_18 = 3585562338841949888ULL;
signed char var_19 = (signed char)-126;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
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
