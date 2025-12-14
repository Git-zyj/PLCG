#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)191;
_Bool var_2 = (_Bool)1;
unsigned int var_4 = 2278201036U;
int var_6 = -1573981564;
int var_7 = 815405938;
short var_10 = (short)-5313;
int var_11 = 1891191635;
int var_12 = -157289082;
int var_13 = 2003614745;
int zero = 0;
short var_14 = (short)-7090;
_Bool var_15 = (_Bool)0;
unsigned char var_16 = (unsigned char)79;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
