#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_6 = (_Bool)0;
signed char var_9 = (signed char)-48;
int var_15 = -1022259554;
unsigned int var_16 = 1615345554U;
int zero = 0;
unsigned int var_18 = 3147010414U;
unsigned char var_19 = (unsigned char)44;
long long int var_20 = -4535984186082866483LL;
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
