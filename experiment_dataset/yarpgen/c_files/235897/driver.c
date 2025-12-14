#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)152;
unsigned long long int var_1 = 15684467688636470224ULL;
int var_2 = -665491889;
long long int var_5 = 3511475799845336533LL;
int zero = 0;
unsigned long long int var_10 = 15923307969067108246ULL;
long long int var_11 = 8896572845965107616LL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
