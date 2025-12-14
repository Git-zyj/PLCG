#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)177;
_Bool var_10 = (_Bool)0;
unsigned char var_15 = (unsigned char)90;
int zero = 0;
unsigned long long int var_17 = 16197521607482294668ULL;
unsigned short var_18 = (unsigned short)14038;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
