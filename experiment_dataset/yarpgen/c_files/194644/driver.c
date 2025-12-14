#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26189;
unsigned long long int var_2 = 3504327218348031914ULL;
short var_3 = (short)-31713;
unsigned short var_4 = (unsigned short)11782;
short var_5 = (short)-16257;
unsigned char var_10 = (unsigned char)39;
short var_11 = (short)22565;
long long int var_12 = 3747010057214968328LL;
short var_15 = (short)-7186;
signed char var_16 = (signed char)110;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned char var_18 = (unsigned char)46;
signed char var_19 = (signed char)72;
void init() {
}

void checksum() {
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
