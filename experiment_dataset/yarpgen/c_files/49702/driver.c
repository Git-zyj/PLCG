#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)79;
short var_6 = (short)11821;
int var_12 = -1998299517;
signed char var_13 = (signed char)-69;
int zero = 0;
unsigned long long int var_17 = 13209111750805971235ULL;
int var_18 = -421244954;
int var_19 = -439221762;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
