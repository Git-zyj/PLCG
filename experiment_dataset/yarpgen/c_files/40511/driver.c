#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 5622213786134267914LL;
unsigned int var_2 = 3409870880U;
unsigned int var_9 = 495434803U;
int zero = 0;
int var_16 = 853811478;
long long int var_17 = -6799152148894774851LL;
unsigned int var_18 = 449864890U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
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
