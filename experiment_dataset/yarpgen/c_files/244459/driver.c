#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -8429717014241998751LL;
unsigned int var_4 = 1063206532U;
unsigned short var_7 = (unsigned short)26140;
unsigned short var_9 = (unsigned short)60502;
int zero = 0;
int var_12 = -2043770959;
unsigned int var_13 = 3879719166U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
