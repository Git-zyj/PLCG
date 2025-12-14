#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 13001785397761600432ULL;
unsigned short var_4 = (unsigned short)18971;
int var_8 = 794702388;
int zero = 0;
long long int var_12 = -2546559376427384381LL;
unsigned char var_13 = (unsigned char)133;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
