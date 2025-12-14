#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_10 = -6516089102000389777LL;
short var_13 = (short)-10879;
int var_14 = 141345909;
int zero = 0;
int var_18 = -1232965682;
unsigned short var_19 = (unsigned short)18525;
short var_20 = (short)20408;
unsigned long long int var_21 = 3036119255332491274ULL;
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
