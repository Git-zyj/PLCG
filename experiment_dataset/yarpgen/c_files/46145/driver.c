#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 3604572733064966198LL;
unsigned int var_3 = 2869173848U;
unsigned char var_5 = (unsigned char)174;
unsigned int var_7 = 3254015994U;
unsigned char var_8 = (unsigned char)121;
int zero = 0;
int var_10 = -1404977829;
long long int var_11 = -8036464689271804393LL;
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
