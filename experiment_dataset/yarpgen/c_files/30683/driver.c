#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1176240512;
long long int var_2 = -4320228306845236396LL;
unsigned char var_7 = (unsigned char)8;
int var_9 = 399873202;
unsigned int var_11 = 4075691029U;
int var_12 = -929904421;
long long int var_13 = 1516083257300331321LL;
unsigned char var_15 = (unsigned char)35;
int zero = 0;
int var_18 = 1169946792;
unsigned char var_19 = (unsigned char)216;
unsigned int var_20 = 2588605578U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
