#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-85;
int var_3 = -264700751;
unsigned short var_5 = (unsigned short)48153;
unsigned long long int var_6 = 8561217226288409291ULL;
unsigned long long int var_7 = 112304102145725014ULL;
signed char var_8 = (signed char)-80;
long long int var_9 = 532440139110382790LL;
unsigned char var_10 = (unsigned char)97;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)(-127 - 1);
signed char var_13 = (signed char)31;
int var_14 = 2018136383;
int var_15 = 1398627959;
int zero = 0;
unsigned short var_16 = (unsigned short)38720;
int var_17 = 417100390;
long long int var_18 = 6370257428325360991LL;
unsigned char var_19 = (unsigned char)147;
short var_20 = (short)-28554;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
