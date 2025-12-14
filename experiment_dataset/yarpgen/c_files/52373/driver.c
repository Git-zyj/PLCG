#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_3 = (signed char)43;
_Bool var_5 = (_Bool)0;
unsigned long long int var_6 = 9231556337229162230ULL;
_Bool var_8 = (_Bool)0;
int var_9 = -651360051;
unsigned short var_12 = (unsigned short)33072;
int var_14 = -1194220796;
unsigned short var_15 = (unsigned short)23210;
int zero = 0;
unsigned char var_16 = (unsigned char)4;
unsigned char var_17 = (unsigned char)132;
unsigned int var_18 = 1699190185U;
short var_19 = (short)1494;
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
