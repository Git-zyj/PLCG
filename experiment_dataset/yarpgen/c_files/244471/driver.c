#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 853977405U;
short var_6 = (short)-7432;
_Bool var_8 = (_Bool)0;
int var_9 = 1291304377;
unsigned short var_10 = (unsigned short)65032;
short var_11 = (short)-26308;
int zero = 0;
signed char var_12 = (signed char)105;
unsigned long long int var_13 = 4284304729587861572ULL;
int var_14 = 942232088;
long long int var_15 = 9213254175554262749LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
