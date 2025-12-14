#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_4 = 3089641588U;
unsigned char var_5 = (unsigned char)193;
_Bool var_9 = (_Bool)1;
unsigned int var_12 = 4148902425U;
int zero = 0;
unsigned char var_14 = (unsigned char)58;
int var_15 = 1155474032;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
