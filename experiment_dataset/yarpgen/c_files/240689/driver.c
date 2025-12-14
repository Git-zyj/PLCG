#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)17315;
unsigned long long int var_2 = 14536701226842593097ULL;
unsigned long long int var_4 = 9471216638038982299ULL;
unsigned short var_5 = (unsigned short)14501;
int var_7 = -1265901416;
unsigned char var_8 = (unsigned char)32;
unsigned int var_9 = 3254929707U;
unsigned int var_11 = 2278315426U;
unsigned char var_13 = (unsigned char)95;
int zero = 0;
unsigned int var_15 = 1128709046U;
_Bool var_16 = (_Bool)0;
_Bool var_17 = (_Bool)0;
unsigned long long int var_18 = 15119483936161172840ULL;
signed char var_19 = (signed char)100;
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
