#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1236015079;
int var_4 = -1425301969;
long long int var_6 = -2395002984929331296LL;
unsigned long long int var_9 = 6231144854374998475ULL;
unsigned int var_10 = 2183515221U;
unsigned int var_11 = 1072406974U;
int zero = 0;
unsigned long long int var_13 = 3017711302654959045ULL;
unsigned int var_14 = 1937606776U;
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
