#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-4928;
short var_1 = (short)-3617;
unsigned long long int var_5 = 703661370050249079ULL;
unsigned char var_7 = (unsigned char)114;
signed char var_8 = (signed char)21;
short var_9 = (short)-28212;
_Bool var_10 = (_Bool)1;
int zero = 0;
short var_11 = (short)11641;
unsigned int var_12 = 1558551276U;
short var_13 = (short)13637;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
