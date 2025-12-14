#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)95;
signed char var_7 = (signed char)-108;
int var_8 = 767347036;
unsigned short var_10 = (unsigned short)64062;
_Bool var_12 = (_Bool)0;
signed char var_14 = (signed char)-86;
long long int var_16 = -6489135650017724032LL;
int zero = 0;
long long int var_17 = -7411277112180951143LL;
int var_18 = 1783914194;
signed char var_19 = (signed char)-16;
unsigned long long int var_20 = 7281261185913233238ULL;
void init() {
}

void checksum() {
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
