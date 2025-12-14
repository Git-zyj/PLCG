#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_1 = 133866669U;
long long int var_2 = 5652393168473449767LL;
unsigned char var_13 = (unsigned char)156;
int zero = 0;
long long int var_14 = 4828604875188453231LL;
long long int var_15 = 1045515245861895219LL;
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
