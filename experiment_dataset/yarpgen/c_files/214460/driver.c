#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)4133;
unsigned long long int var_5 = 3632678587045394561ULL;
long long int var_6 = -3054934128874043181LL;
unsigned int var_7 = 2871115088U;
short var_12 = (short)29340;
unsigned char var_13 = (unsigned char)80;
int zero = 0;
signed char var_19 = (signed char)-27;
unsigned short var_20 = (unsigned short)21476;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
