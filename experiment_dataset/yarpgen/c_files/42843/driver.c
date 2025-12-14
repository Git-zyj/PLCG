#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)77;
int var_3 = 1525912743;
int var_4 = 385209807;
unsigned char var_6 = (unsigned char)153;
unsigned long long int var_7 = 7820908673259508897ULL;
unsigned char var_8 = (unsigned char)77;
int zero = 0;
unsigned short var_11 = (unsigned short)35518;
unsigned short var_12 = (unsigned short)11759;
void init() {
}

void checksum() {
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
