#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)37497;
signed char var_10 = (signed char)-22;
long long int var_12 = 5690210947492577410LL;
int zero = 0;
long long int var_13 = -3422841946265454870LL;
unsigned char var_14 = (unsigned char)224;
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
