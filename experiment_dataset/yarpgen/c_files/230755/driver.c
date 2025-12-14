#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)52;
unsigned char var_12 = (unsigned char)23;
signed char var_15 = (signed char)(-127 - 1);
unsigned long long int var_18 = 12633524010085415905ULL;
int zero = 0;
signed char var_19 = (signed char)-58;
unsigned long long int var_20 = 6213765734182340960ULL;
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
