#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 2043867556;
short var_3 = (short)-16071;
signed char var_7 = (signed char)108;
unsigned int var_9 = 2477588371U;
int zero = 0;
short var_10 = (short)-10273;
unsigned char var_11 = (unsigned char)1;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
