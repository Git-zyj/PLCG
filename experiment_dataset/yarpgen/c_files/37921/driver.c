#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1936376370;
unsigned int var_6 = 1713121166U;
unsigned short var_8 = (unsigned short)39444;
unsigned int var_9 = 721206041U;
int var_10 = 1168101655;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned long long int var_15 = 18326772811343229990ULL;
unsigned long long int var_16 = 9209621927164079715ULL;
unsigned char var_17 = (unsigned char)39;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
