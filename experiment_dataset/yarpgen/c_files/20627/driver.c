#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -569783225;
unsigned char var_1 = (unsigned char)254;
unsigned int var_7 = 1785349355U;
int var_9 = -480183394;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
short var_12 = (short)29095;
int var_14 = 1114807802;
_Bool var_15 = (_Bool)0;
int zero = 0;
unsigned char var_16 = (unsigned char)177;
short var_17 = (short)21158;
unsigned long long int var_18 = 2606875716879292788ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
