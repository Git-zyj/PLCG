#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
unsigned short var_3 = (unsigned short)803;
int var_5 = 1970981431;
short var_7 = (short)-11813;
short var_9 = (short)9250;
int zero = 0;
unsigned short var_10 = (unsigned short)29793;
_Bool var_11 = (_Bool)0;
unsigned int var_12 = 2313133659U;
unsigned short var_13 = (unsigned short)52131;
signed char var_14 = (signed char)86;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
