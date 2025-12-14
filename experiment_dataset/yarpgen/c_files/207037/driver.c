#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)31098;
int var_9 = 387628448;
unsigned long long int var_10 = 16804574422172974647ULL;
long long int var_11 = 1460116269879663360LL;
int var_12 = -131985040;
unsigned long long int var_14 = 15810276809096272767ULL;
_Bool var_16 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)61;
short var_19 = (short)-27497;
short var_20 = (short)3537;
int var_21 = 1014191604;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
