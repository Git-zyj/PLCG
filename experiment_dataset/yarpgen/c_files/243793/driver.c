#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)184;
long long int var_2 = -8207246201216067297LL;
unsigned char var_3 = (unsigned char)60;
unsigned long long int var_4 = 5690610776892049078ULL;
int zero = 0;
unsigned long long int var_12 = 16766110900976770498ULL;
unsigned char var_13 = (unsigned char)226;
long long int var_14 = -7237158629885572746LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
