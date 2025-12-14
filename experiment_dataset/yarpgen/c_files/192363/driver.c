#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = 1208739547;
int var_9 = -605770512;
unsigned char var_11 = (unsigned char)89;
unsigned int var_12 = 2406120694U;
int zero = 0;
unsigned int var_15 = 2728586425U;
unsigned char var_16 = (unsigned char)206;
int var_17 = -543789879;
int var_18 = 566254108;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
