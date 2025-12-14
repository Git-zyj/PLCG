#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
short var_3 = (short)8684;
_Bool var_5 = (_Bool)0;
signed char var_10 = (signed char)106;
short var_13 = (short)12945;
short var_14 = (short)-19617;
unsigned long long int var_16 = 51039597833240715ULL;
int zero = 0;
short var_17 = (short)-15288;
unsigned short var_18 = (unsigned short)10253;
short var_19 = (short)-13382;
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
