#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_10 = (unsigned char)77;
unsigned long long int var_12 = 12219931843600165584ULL;
unsigned char var_13 = (unsigned char)22;
signed char var_16 = (signed char)-41;
int zero = 0;
long long int var_19 = 716075160553613768LL;
unsigned long long int var_20 = 6011370049978544012ULL;
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
