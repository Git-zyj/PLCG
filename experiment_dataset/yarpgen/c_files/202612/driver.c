#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -294096147;
unsigned int var_1 = 3334741220U;
signed char var_4 = (signed char)125;
signed char var_5 = (signed char)104;
signed char var_8 = (signed char)-108;
_Bool var_9 = (_Bool)0;
_Bool var_10 = (_Bool)0;
unsigned int var_13 = 979929938U;
int zero = 0;
unsigned char var_17 = (unsigned char)185;
unsigned int var_18 = 669249392U;
void init() {
}

void checksum() {
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
