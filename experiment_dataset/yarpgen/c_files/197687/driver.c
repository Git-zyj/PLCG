#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-58;
unsigned short var_9 = (unsigned short)40381;
unsigned int var_10 = 1492020485U;
unsigned char var_11 = (unsigned char)241;
int var_12 = 24267358;
int zero = 0;
unsigned short var_18 = (unsigned short)64676;
int var_19 = 341483096;
void init() {
}

void checksum() {
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
