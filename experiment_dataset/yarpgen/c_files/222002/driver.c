#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-20246;
unsigned char var_9 = (unsigned char)193;
unsigned short var_12 = (unsigned short)10055;
int zero = 0;
long long int var_14 = -8425045248132580492LL;
long long int var_15 = -3436756140877368441LL;
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
