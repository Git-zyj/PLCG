#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned long long int var_2 = 16992651646005082052ULL;
_Bool var_3 = (_Bool)1;
unsigned char var_4 = (unsigned char)189;
unsigned short var_5 = (unsigned short)16309;
signed char var_6 = (signed char)58;
unsigned int var_7 = 80004167U;
unsigned char var_8 = (unsigned char)129;
unsigned long long int var_9 = 327556885424495213ULL;
short var_10 = (short)-8065;
short var_11 = (short)8562;
int zero = 0;
short var_12 = (short)-28366;
signed char var_13 = (signed char)-20;
unsigned char var_14 = (unsigned char)188;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
