#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = 1197799452;
unsigned int var_2 = 860184447U;
unsigned short var_3 = (unsigned short)25462;
unsigned short var_6 = (unsigned short)32269;
signed char var_9 = (signed char)-14;
int zero = 0;
unsigned long long int var_11 = 3857420663971539394ULL;
int var_12 = 186925040;
unsigned long long int var_13 = 1156913114033744454ULL;
signed char var_14 = (signed char)-59;
_Bool var_15 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
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
