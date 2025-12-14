#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 307936929;
long long int var_1 = -4007863334491509825LL;
long long int var_2 = 5819873870798949612LL;
unsigned int var_11 = 1537265539U;
unsigned char var_12 = (unsigned char)254;
int zero = 0;
short var_14 = (short)-25487;
int var_15 = 1600721180;
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
