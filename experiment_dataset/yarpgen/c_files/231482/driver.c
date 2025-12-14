#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)122;
unsigned int var_8 = 443535514U;
unsigned long long int var_10 = 14363032064973676004ULL;
int zero = 0;
short var_12 = (short)-27533;
unsigned long long int var_13 = 9238304289102200031ULL;
int var_14 = 1204967205;
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
