#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)111;
unsigned short var_6 = (unsigned short)28494;
signed char var_10 = (signed char)-31;
int zero = 0;
unsigned short var_18 = (unsigned short)53807;
unsigned short var_19 = (unsigned short)43746;
short var_20 = (short)27869;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
