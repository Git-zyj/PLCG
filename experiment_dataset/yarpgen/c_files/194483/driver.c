#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)41389;
unsigned int var_1 = 1502451591U;
long long int var_4 = -1461091835122451507LL;
unsigned int var_6 = 2183099780U;
short var_8 = (short)-21956;
int zero = 0;
unsigned int var_10 = 3001468285U;
signed char var_11 = (signed char)50;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
