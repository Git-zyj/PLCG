#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)61;
unsigned char var_4 = (unsigned char)191;
signed char var_8 = (signed char)-90;
long long int var_9 = -2505951414552359686LL;
int var_10 = 1006224682;
int zero = 0;
int var_13 = 2144506360;
int var_14 = 1856852593;
long long int var_15 = -5870106065524373354LL;
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
