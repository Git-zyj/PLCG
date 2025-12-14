#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_5 = -1951149018;
unsigned int var_6 = 67549795U;
unsigned long long int var_7 = 14283042811634845592ULL;
short var_13 = (short)4929;
unsigned int var_16 = 1175028522U;
int zero = 0;
long long int var_18 = -3900409248208168811LL;
unsigned char var_19 = (unsigned char)119;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
