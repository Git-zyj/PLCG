#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)5087;
long long int var_13 = -342515528915349531LL;
unsigned int var_16 = 3693413921U;
int zero = 0;
short var_19 = (short)-29844;
unsigned long long int var_20 = 15235770504738281653ULL;
unsigned int var_21 = 2468778382U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
