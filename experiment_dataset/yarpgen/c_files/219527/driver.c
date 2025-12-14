#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 273074906;
short var_3 = (short)-3345;
int var_5 = -970653493;
long long int var_7 = -1821382575679838967LL;
int var_8 = -402102061;
short var_11 = (short)-24383;
int var_12 = 471891775;
int var_13 = -2045018034;
signed char var_14 = (signed char)-5;
long long int var_15 = 327828841688761311LL;
int zero = 0;
long long int var_16 = 6079906868965485455LL;
unsigned int var_17 = 308289355U;
int var_18 = -1842206693;
int var_19 = 1129511657;
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
