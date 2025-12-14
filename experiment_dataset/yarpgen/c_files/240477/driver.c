#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)25;
unsigned short var_5 = (unsigned short)46294;
int var_8 = 146471510;
_Bool var_11 = (_Bool)0;
short var_17 = (short)23468;
int zero = 0;
unsigned long long int var_18 = 14375299403064319630ULL;
long long int var_19 = 3872694334352994609LL;
void init() {
}

void checksum() {
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
