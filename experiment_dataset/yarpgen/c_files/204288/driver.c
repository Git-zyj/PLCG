#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -108435350;
unsigned char var_4 = (unsigned char)146;
long long int var_9 = 4802991406028310992LL;
int zero = 0;
long long int var_10 = 8031036181096891149LL;
signed char var_11 = (signed char)-14;
unsigned char var_12 = (unsigned char)224;
long long int var_13 = -4610828083999957515LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
