#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 11083367828915046396ULL;
unsigned short var_7 = (unsigned short)19371;
unsigned char var_11 = (unsigned char)133;
int zero = 0;
unsigned long long int var_13 = 5222169975332207456ULL;
int var_14 = 287159529;
void init() {
}

void checksum() {
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
