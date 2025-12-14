#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 962151195737984132ULL;
long long int var_5 = 6532446303531555969LL;
unsigned char var_10 = (unsigned char)245;
int zero = 0;
short var_12 = (short)-20562;
unsigned char var_13 = (unsigned char)62;
void init() {
}

void checksum() {
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
