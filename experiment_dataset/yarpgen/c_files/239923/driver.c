#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-105;
unsigned short var_9 = (unsigned short)19391;
unsigned short var_12 = (unsigned short)24273;
int zero = 0;
short var_18 = (short)20405;
short var_19 = (short)29057;
unsigned char var_20 = (unsigned char)16;
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
