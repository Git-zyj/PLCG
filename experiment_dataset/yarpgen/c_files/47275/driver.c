#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2148140744U;
unsigned long long int var_6 = 17939262758321440105ULL;
unsigned short var_7 = (unsigned short)57559;
unsigned int var_15 = 542801786U;
int zero = 0;
unsigned short var_16 = (unsigned short)5663;
unsigned int var_17 = 1928944052U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
