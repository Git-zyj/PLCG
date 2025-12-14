#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 3381401458U;
unsigned short var_3 = (unsigned short)40058;
short var_5 = (short)-27001;
_Bool var_7 = (_Bool)0;
long long int var_8 = 2701531256854079491LL;
signed char var_10 = (signed char)92;
short var_11 = (short)-11043;
signed char var_12 = (signed char)15;
signed char var_13 = (signed char)100;
unsigned int var_14 = 701314446U;
_Bool var_17 = (_Bool)1;
unsigned short var_18 = (unsigned short)16678;
int zero = 0;
unsigned short var_19 = (unsigned short)50783;
short var_20 = (short)27992;
void init() {
}

void checksum() {
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
