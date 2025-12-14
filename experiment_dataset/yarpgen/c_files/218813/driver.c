#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)25;
long long int var_6 = -2154526161175726615LL;
long long int var_10 = 7113964919490049779LL;
int zero = 0;
unsigned char var_20 = (unsigned char)73;
long long int var_21 = 2446497798595301268LL;
void init() {
}

void checksum() {
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
