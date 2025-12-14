#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 9484126654718647434ULL;
unsigned char var_5 = (unsigned char)6;
unsigned long long int var_7 = 11299179079470694936ULL;
int var_11 = 794906357;
int zero = 0;
int var_18 = -1574997313;
signed char var_19 = (signed char)-95;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
