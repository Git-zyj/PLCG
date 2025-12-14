#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = 291527819;
_Bool var_9 = (_Bool)0;
signed char var_10 = (signed char)-66;
_Bool var_11 = (_Bool)1;
unsigned long long int var_13 = 9661044223194647046ULL;
signed char var_15 = (signed char)-64;
_Bool var_17 = (_Bool)1;
int zero = 0;
unsigned long long int var_20 = 6306614833689726367ULL;
short var_21 = (short)12827;
void init() {
}

void checksum() {
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
