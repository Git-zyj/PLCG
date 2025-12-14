#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2528190040633703826LL;
unsigned long long int var_4 = 5975887746386685862ULL;
int zero = 0;
int var_10 = -712549772;
unsigned char var_11 = (unsigned char)105;
unsigned short var_12 = (unsigned short)408;
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
