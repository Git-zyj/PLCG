#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8841918671970434353LL;
int var_2 = -262031939;
_Bool var_3 = (_Bool)1;
int var_4 = 1692923676;
long long int var_6 = 9015705061534969518LL;
int var_7 = -299440259;
int var_9 = 698649032;
unsigned int var_11 = 1446738908U;
unsigned int var_12 = 2551041394U;
int zero = 0;
unsigned short var_17 = (unsigned short)41331;
unsigned int var_18 = 383530401U;
long long int var_19 = -3872828472796878133LL;
unsigned long long int var_20 = 17211473250507005558ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
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
