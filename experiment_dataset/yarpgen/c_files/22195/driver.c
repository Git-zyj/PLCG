#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2070649344U;
unsigned long long int var_5 = 1621863392246946260ULL;
unsigned int var_9 = 527421720U;
_Bool var_11 = (_Bool)0;
int var_12 = -1301777683;
int zero = 0;
unsigned int var_16 = 3052369150U;
unsigned char var_17 = (unsigned char)209;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
