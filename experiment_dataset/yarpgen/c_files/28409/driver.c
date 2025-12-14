#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1921219610;
unsigned char var_2 = (unsigned char)121;
int var_3 = 831497774;
signed char var_9 = (signed char)-35;
signed char var_11 = (signed char)73;
unsigned int var_13 = 3598370107U;
unsigned int var_14 = 1229846366U;
int zero = 0;
unsigned int var_15 = 573947076U;
_Bool var_16 = (_Bool)0;
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
