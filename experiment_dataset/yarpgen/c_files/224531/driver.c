#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -7451633309207519504LL;
unsigned long long int var_5 = 7595121220050962998ULL;
long long int var_8 = -3043998747580231533LL;
int zero = 0;
signed char var_10 = (signed char)72;
unsigned short var_11 = (unsigned short)37629;
long long int var_12 = 506213926243673883LL;
unsigned char var_13 = (unsigned char)170;
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
