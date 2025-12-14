#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_6 = 3131966341510562368ULL;
_Bool var_12 = (_Bool)0;
unsigned long long int var_14 = 5047972266076282733ULL;
unsigned long long int var_17 = 16041830447931488180ULL;
int zero = 0;
unsigned int var_19 = 1292364475U;
unsigned short var_20 = (unsigned short)37694;
void init() {
}

void checksum() {
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
