#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)34;
unsigned char var_4 = (unsigned char)16;
unsigned short var_5 = (unsigned short)24442;
unsigned char var_9 = (unsigned char)147;
long long int var_10 = 5030426655158754890LL;
signed char var_11 = (signed char)109;
unsigned char var_12 = (unsigned char)214;
unsigned int var_13 = 2877910219U;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned int var_15 = 3447863591U;
_Bool var_16 = (_Bool)0;
short var_17 = (short)-14352;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
