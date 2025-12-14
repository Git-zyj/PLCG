#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_7 = (signed char)71;
unsigned char var_9 = (unsigned char)111;
signed char var_10 = (signed char)-70;
unsigned char var_11 = (unsigned char)109;
int zero = 0;
unsigned short var_15 = (unsigned short)60152;
signed char var_16 = (signed char)-67;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
