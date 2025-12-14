#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_2 = 12987221917605785521ULL;
unsigned short var_6 = (unsigned short)18083;
unsigned char var_9 = (unsigned char)39;
long long int var_10 = -20927687714066821LL;
int zero = 0;
unsigned char var_11 = (unsigned char)25;
short var_12 = (short)-16268;
unsigned long long int var_13 = 3604398719171339420ULL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
