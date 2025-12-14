#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)43094;
int var_6 = 1501408619;
long long int var_9 = -1395947117785192847LL;
signed char var_13 = (signed char)42;
int zero = 0;
signed char var_14 = (signed char)-27;
unsigned char var_15 = (unsigned char)40;
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
