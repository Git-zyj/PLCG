#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
_Bool var_1 = (_Bool)0;
unsigned int var_7 = 617162516U;
unsigned char var_11 = (unsigned char)103;
unsigned long long int var_14 = 14223324485131966362ULL;
int zero = 0;
unsigned short var_15 = (unsigned short)50240;
unsigned int var_16 = 2742721541U;
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
