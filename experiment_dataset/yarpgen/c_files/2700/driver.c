#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9909757071437572937ULL;
int var_2 = -302953469;
unsigned int var_6 = 2310476458U;
unsigned long long int var_8 = 12169541163799293144ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)127;
unsigned long long int var_11 = 5062291118955506964ULL;
int var_12 = -988865025;
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
