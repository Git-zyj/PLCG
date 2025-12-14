#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3232209826029324091LL;
unsigned char var_3 = (unsigned char)52;
unsigned int var_5 = 2309310799U;
unsigned char var_7 = (unsigned char)21;
unsigned int var_8 = 3983477900U;
signed char var_9 = (signed char)16;
short var_10 = (short)16128;
signed char var_12 = (signed char)24;
unsigned long long int var_13 = 18075479093564710027ULL;
unsigned int var_15 = 4193272672U;
int var_16 = 863378222;
int zero = 0;
short var_18 = (short)-26418;
long long int var_19 = -3709116308136715022LL;
unsigned int var_20 = 3938467937U;
short var_21 = (short)23770;
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
