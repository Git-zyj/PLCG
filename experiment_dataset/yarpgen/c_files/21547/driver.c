#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1440177377;
unsigned long long int var_2 = 15581242560784303826ULL;
long long int var_4 = -8791116747593823777LL;
signed char var_5 = (signed char)14;
signed char var_7 = (signed char)-114;
long long int var_8 = -4500829364815294745LL;
int var_9 = 1020288546;
long long int var_11 = -298305115242602419LL;
unsigned long long int var_12 = 16831539894754773367ULL;
int zero = 0;
unsigned char var_13 = (unsigned char)191;
signed char var_14 = (signed char)109;
unsigned short var_15 = (unsigned short)31818;
unsigned char var_16 = (unsigned char)146;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
