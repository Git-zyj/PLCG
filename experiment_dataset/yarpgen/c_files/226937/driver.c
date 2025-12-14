#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 6925750701542859654ULL;
unsigned char var_1 = (unsigned char)129;
short var_3 = (short)21837;
short var_5 = (short)-25995;
unsigned long long int var_7 = 18251769164338267270ULL;
short var_8 = (short)-25598;
long long int var_9 = -1063198880925349416LL;
int zero = 0;
unsigned char var_10 = (unsigned char)31;
unsigned int var_11 = 4250552145U;
short var_12 = (short)30864;
int var_13 = 304727715;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
