#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 661349942557288786ULL;
long long int var_7 = -9146919045402789725LL;
unsigned long long int var_8 = 15033849344145433486ULL;
unsigned char var_9 = (unsigned char)250;
int zero = 0;
unsigned char var_10 = (unsigned char)79;
int var_11 = 90449500;
unsigned char var_12 = (unsigned char)181;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
