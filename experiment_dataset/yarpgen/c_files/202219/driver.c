#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1101170649;
signed char var_4 = (signed char)-66;
unsigned int var_9 = 706767674U;
unsigned char var_13 = (unsigned char)85;
int zero = 0;
unsigned char var_14 = (unsigned char)190;
long long int var_15 = 2455032631096008653LL;
void init() {
}

void checksum() {
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
