#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 7974182386458459447ULL;
_Bool var_4 = (_Bool)0;
long long int var_10 = -4359845757147475532LL;
unsigned long long int var_11 = 18157995466058429018ULL;
unsigned long long int var_13 = 16455448272373906006ULL;
int zero = 0;
unsigned int var_15 = 3932982591U;
unsigned char var_16 = (unsigned char)128;
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
