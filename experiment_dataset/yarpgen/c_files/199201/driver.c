#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)171;
long long int var_3 = 1000850317732894269LL;
unsigned char var_4 = (unsigned char)114;
_Bool var_11 = (_Bool)0;
_Bool var_13 = (_Bool)0;
long long int var_14 = -2180168461192644871LL;
int zero = 0;
unsigned char var_15 = (unsigned char)186;
long long int var_16 = 3324708889276921862LL;
unsigned char var_17 = (unsigned char)155;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
