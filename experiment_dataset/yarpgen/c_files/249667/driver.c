#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)47801;
int var_1 = 1956530013;
short var_2 = (short)30431;
short var_3 = (short)-27257;
unsigned int var_4 = 3642692289U;
unsigned short var_5 = (unsigned short)23198;
_Bool var_6 = (_Bool)1;
unsigned char var_7 = (unsigned char)5;
unsigned long long int var_8 = 2704247679754876954ULL;
signed char var_9 = (signed char)113;
_Bool var_10 = (_Bool)1;
int zero = 0;
int var_11 = -849615913;
short var_12 = (short)350;
unsigned long long int var_13 = 4518072084123411348ULL;
short var_14 = (short)-3527;
short var_15 = (short)10763;
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
