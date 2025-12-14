#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)1;
signed char var_4 = (signed char)-117;
unsigned long long int var_5 = 5203022463586504211ULL;
int var_8 = 1063312999;
signed char var_17 = (signed char)53;
int var_18 = -87015615;
int zero = 0;
unsigned int var_19 = 1402655364U;
signed char var_20 = (signed char)111;
signed char var_21 = (signed char)-10;
int var_22 = 402321191;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
