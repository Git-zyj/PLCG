#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 2725504361870148194LL;
unsigned long long int var_1 = 5308902511757349717ULL;
int zero = 0;
unsigned long long int var_17 = 15903609805640423345ULL;
unsigned char var_18 = (unsigned char)238;
unsigned long long int var_19 = 599608574220102263ULL;
signed char var_20 = (signed char)-27;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
