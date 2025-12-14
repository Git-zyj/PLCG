#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_9 = -557314418;
int var_13 = -1461094454;
int zero = 0;
unsigned long long int var_18 = 11697101934877251629ULL;
unsigned char var_19 = (unsigned char)150;
unsigned short var_20 = (unsigned short)10163;
int var_21 = 586889545;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
