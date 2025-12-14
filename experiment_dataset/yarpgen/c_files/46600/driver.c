#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
signed char var_3 = (signed char)-107;
long long int var_5 = -485212754194255312LL;
int var_7 = -864795807;
unsigned int var_8 = 2869276031U;
short var_9 = (short)21577;
signed char var_12 = (signed char)-87;
int zero = 0;
int var_14 = -1500740518;
unsigned int var_15 = 2501845913U;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 3808487642591872989ULL;
int var_18 = -630422439;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
