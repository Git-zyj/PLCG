#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_6 = (unsigned short)61992;
unsigned long long int var_9 = 8789535060536435953ULL;
signed char var_11 = (signed char)127;
int zero = 0;
short var_12 = (short)-6164;
unsigned short var_13 = (unsigned short)59771;
unsigned int var_14 = 2755002538U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
