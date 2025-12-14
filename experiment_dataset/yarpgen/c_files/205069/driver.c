#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)222;
unsigned char var_1 = (unsigned char)50;
unsigned long long int var_2 = 5814614686241317284ULL;
long long int var_6 = -8009183121369461713LL;
unsigned long long int var_8 = 18097138584924182206ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)48;
unsigned char var_11 = (unsigned char)177;
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
