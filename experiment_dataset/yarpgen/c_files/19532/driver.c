#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1047911613089137765LL;
int var_2 = 2146936505;
unsigned short var_3 = (unsigned short)18998;
unsigned short var_4 = (unsigned short)12114;
unsigned int var_6 = 896064804U;
signed char var_9 = (signed char)1;
signed char var_11 = (signed char)60;
signed char var_12 = (signed char)-61;
int zero = 0;
long long int var_13 = -4854865932778570515LL;
int var_14 = 2021288341;
signed char var_15 = (signed char)1;
_Bool var_16 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
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
