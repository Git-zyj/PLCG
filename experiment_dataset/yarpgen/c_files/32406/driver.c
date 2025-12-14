#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)8830;
unsigned int var_5 = 3743397186U;
long long int var_7 = -3192152196858329166LL;
long long int var_9 = 3877743386229920652LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned int var_19 = 712858476U;
int var_20 = -1212515981;
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
