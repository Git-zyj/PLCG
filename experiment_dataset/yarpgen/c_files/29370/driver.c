#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 4194496892491215359LL;
unsigned char var_1 = (unsigned char)67;
unsigned short var_14 = (unsigned short)9993;
int zero = 0;
unsigned char var_17 = (unsigned char)35;
unsigned int var_18 = 702091895U;
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
