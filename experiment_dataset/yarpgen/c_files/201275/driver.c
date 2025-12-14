#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)26233;
long long int var_1 = 8264364929029258708LL;
int var_2 = 1100490192;
unsigned short var_3 = (unsigned short)60353;
int var_7 = 784032749;
int var_8 = 1436671378;
int var_9 = 581649958;
int zero = 0;
int var_10 = -1798980898;
int var_11 = -2106323706;
long long int var_12 = 2469539459948253600LL;
_Bool var_13 = (_Bool)1;
_Bool var_14 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
