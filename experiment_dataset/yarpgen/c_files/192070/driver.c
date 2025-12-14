#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)166;
unsigned long long int var_2 = 2572773555003094514ULL;
unsigned long long int var_3 = 3596518500822509992ULL;
unsigned char var_8 = (unsigned char)253;
_Bool var_9 = (_Bool)1;
_Bool var_10 = (_Bool)0;
unsigned int var_15 = 3201294970U;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
int var_19 = -620486370;
signed char var_20 = (signed char)85;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
