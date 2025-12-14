#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3451494849U;
_Bool var_5 = (_Bool)0;
unsigned int var_10 = 2425828305U;
unsigned int var_11 = 3786161873U;
unsigned char var_12 = (unsigned char)159;
unsigned int var_13 = 4012060661U;
int zero = 0;
signed char var_19 = (signed char)-110;
unsigned int var_20 = 2557744377U;
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
