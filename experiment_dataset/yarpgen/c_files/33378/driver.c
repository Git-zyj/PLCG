#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-799;
short var_3 = (short)-15059;
short var_4 = (short)-502;
_Bool var_5 = (_Bool)0;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2457196708U;
unsigned int var_8 = 3178450844U;
int var_9 = 1261474055;
short var_10 = (short)-21751;
_Bool var_11 = (_Bool)1;
int zero = 0;
unsigned int var_13 = 5386128U;
unsigned long long int var_14 = 3110617586003055654ULL;
short var_15 = (short)-21228;
unsigned int var_16 = 1930609064U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
