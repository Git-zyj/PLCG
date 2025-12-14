#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)214;
short var_6 = (short)20195;
unsigned short var_8 = (unsigned short)42823;
unsigned char var_9 = (unsigned char)16;
short var_10 = (short)-2905;
unsigned char var_12 = (unsigned char)231;
_Bool var_13 = (_Bool)1;
unsigned long long int var_15 = 2739948481721430848ULL;
unsigned int var_17 = 4070327042U;
int zero = 0;
unsigned short var_18 = (unsigned short)41614;
signed char var_19 = (signed char)-34;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
