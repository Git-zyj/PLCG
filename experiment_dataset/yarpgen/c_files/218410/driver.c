#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 18250268461026640614ULL;
unsigned short var_7 = (unsigned short)23644;
short var_9 = (short)-9271;
int zero = 0;
unsigned int var_13 = 1151738184U;
unsigned long long int var_14 = 17882731575268848048ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
