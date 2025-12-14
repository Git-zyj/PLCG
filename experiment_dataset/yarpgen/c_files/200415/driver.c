#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-5;
unsigned long long int var_4 = 12277173728726221479ULL;
long long int var_8 = -4391311100467932341LL;
int var_11 = 379716476;
unsigned long long int var_13 = 5684228077903338326ULL;
int zero = 0;
unsigned char var_14 = (unsigned char)128;
unsigned long long int var_15 = 6850700142670072206ULL;
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
