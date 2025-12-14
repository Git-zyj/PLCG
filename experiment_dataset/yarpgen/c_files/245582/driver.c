#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)43038;
signed char var_9 = (signed char)18;
unsigned char var_10 = (unsigned char)82;
unsigned short var_14 = (unsigned short)51273;
int zero = 0;
unsigned short var_20 = (unsigned short)44112;
signed char var_21 = (signed char)-117;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
