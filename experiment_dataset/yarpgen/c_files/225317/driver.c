#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -9106368409457079736LL;
short var_2 = (short)-22434;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned int var_12 = 387194747U;
unsigned char var_13 = (unsigned char)79;
unsigned long long int var_14 = 14718834056822388832ULL;
unsigned int var_15 = 535443491U;
_Bool var_16 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
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
