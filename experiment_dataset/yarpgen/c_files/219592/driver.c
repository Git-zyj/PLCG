#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_6 = (short)-22307;
long long int var_8 = 4581325397798857664LL;
long long int var_9 = -5855447161068826557LL;
int zero = 0;
unsigned short var_18 = (unsigned short)43113;
unsigned short var_19 = (unsigned short)56563;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
