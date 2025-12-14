#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 13019172668246001314ULL;
signed char var_1 = (signed char)127;
long long int var_3 = 3609885929445430723LL;
unsigned short var_4 = (unsigned short)14487;
signed char var_7 = (signed char)17;
_Bool var_9 = (_Bool)0;
unsigned char var_13 = (unsigned char)161;
int zero = 0;
unsigned long long int var_15 = 6409926396732152041ULL;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
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
