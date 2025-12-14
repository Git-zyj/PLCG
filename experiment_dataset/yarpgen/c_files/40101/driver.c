#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)221;
unsigned char var_3 = (unsigned char)218;
int var_8 = 2127804812;
unsigned long long int var_11 = 15910501940428473515ULL;
unsigned long long int var_12 = 10989276448246297058ULL;
long long int var_13 = 3317044388559006094LL;
int zero = 0;
short var_15 = (short)25502;
unsigned int var_16 = 2625644209U;
void init() {
}

void checksum() {
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
