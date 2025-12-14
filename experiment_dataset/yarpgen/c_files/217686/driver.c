#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7139255748318985060ULL;
unsigned int var_3 = 1405687930U;
unsigned long long int var_9 = 17755193909191536615ULL;
int zero = 0;
unsigned long long int var_13 = 8330396188111623134ULL;
unsigned int var_14 = 214357713U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
