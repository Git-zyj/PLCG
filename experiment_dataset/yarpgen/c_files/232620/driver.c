#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-4;
unsigned short var_1 = (unsigned short)1650;
unsigned short var_2 = (unsigned short)61930;
_Bool var_3 = (_Bool)0;
int var_4 = 1510952845;
int var_5 = 1684054749;
signed char var_6 = (signed char)-37;
int var_8 = 802144688;
short var_10 = (short)-18663;
unsigned short var_11 = (unsigned short)43577;
long long int var_12 = -6853552973403705472LL;
unsigned short var_14 = (unsigned short)65395;
unsigned short var_15 = (unsigned short)619;
int zero = 0;
long long int var_16 = -3089947182255979612LL;
unsigned short var_17 = (unsigned short)6394;
long long int var_18 = -985263237319650868LL;
void init() {
}

void checksum() {
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
