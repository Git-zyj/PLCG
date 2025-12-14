#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-11006;
_Bool var_7 = (_Bool)0;
short var_11 = (short)684;
long long int var_12 = -4306746561678905565LL;
int zero = 0;
long long int var_15 = -2079431900607143617LL;
short var_16 = (short)-11272;
unsigned char var_17 = (unsigned char)47;
_Bool var_18 = (_Bool)0;
short var_19 = (short)-24585;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
