#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)55672;
int var_1 = 940439645;
int var_2 = -973950266;
unsigned char var_3 = (unsigned char)112;
unsigned long long int var_4 = 6112596103661760727ULL;
unsigned int var_8 = 93940997U;
unsigned int var_9 = 1950145947U;
int zero = 0;
unsigned int var_10 = 3405136593U;
unsigned short var_11 = (unsigned short)39617;
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
