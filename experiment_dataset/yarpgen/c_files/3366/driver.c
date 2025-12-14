#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)11;
signed char var_7 = (signed char)-123;
unsigned char var_10 = (unsigned char)13;
int zero = 0;
unsigned short var_13 = (unsigned short)49467;
int var_14 = 258119974;
unsigned long long int var_15 = 7603298662527623085ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
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
