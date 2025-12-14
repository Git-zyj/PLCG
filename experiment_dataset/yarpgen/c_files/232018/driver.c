#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1588976039;
unsigned long long int var_1 = 6378500081653669501ULL;
unsigned char var_3 = (unsigned char)253;
unsigned char var_6 = (unsigned char)29;
unsigned long long int var_7 = 3317385766612328909ULL;
_Bool var_8 = (_Bool)0;
unsigned char var_9 = (unsigned char)43;
unsigned char var_10 = (unsigned char)19;
unsigned int var_11 = 3064306507U;
long long int var_12 = 5338541792080574328LL;
int var_13 = -637448316;
int zero = 0;
unsigned char var_14 = (unsigned char)135;
int var_15 = 543880412;
unsigned char var_16 = (unsigned char)176;
unsigned char var_17 = (unsigned char)18;
int var_18 = -143393096;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
