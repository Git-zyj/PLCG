#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -1072993931557915244LL;
unsigned short var_2 = (unsigned short)34321;
int var_4 = 126104117;
unsigned char var_8 = (unsigned char)81;
int zero = 0;
unsigned long long int var_14 = 13320564206022848863ULL;
signed char var_15 = (signed char)-71;
void init() {
}

void checksum() {
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
