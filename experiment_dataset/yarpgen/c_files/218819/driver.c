#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_9 = (unsigned char)54;
signed char var_10 = (signed char)-59;
signed char var_19 = (signed char)-19;
int zero = 0;
unsigned long long int var_20 = 2376847448899702023ULL;
unsigned char var_21 = (unsigned char)231;
unsigned char var_22 = (unsigned char)71;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
