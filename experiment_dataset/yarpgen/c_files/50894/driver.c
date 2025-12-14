#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_8 = (unsigned short)34478;
unsigned short var_12 = (unsigned short)53331;
unsigned char var_14 = (unsigned char)101;
int zero = 0;
signed char var_17 = (signed char)-51;
long long int var_18 = -7649597644162230336LL;
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
