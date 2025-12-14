#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_6 = (signed char)71;
unsigned char var_7 = (unsigned char)207;
signed char var_9 = (signed char)-21;
int zero = 0;
unsigned long long int var_13 = 4843153202051144329ULL;
unsigned long long int var_14 = 688256306106044839ULL;
unsigned int var_15 = 3739635579U;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
