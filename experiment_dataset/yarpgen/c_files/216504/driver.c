#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11968590645007494947ULL;
unsigned short var_2 = (unsigned short)62496;
unsigned long long int var_5 = 2440758260396084000ULL;
unsigned char var_8 = (unsigned char)222;
long long int var_10 = -6303455752171102528LL;
int zero = 0;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 18369960951327227254ULL;
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
