#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1972973331;
long long int var_1 = -4505116380453070337LL;
unsigned int var_4 = 4137299182U;
_Bool var_5 = (_Bool)0;
int zero = 0;
unsigned int var_14 = 3254947498U;
unsigned int var_15 = 3106680758U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
