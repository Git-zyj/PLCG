#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -1122710331;
unsigned int var_11 = 1583566926U;
unsigned long long int var_13 = 5510762710121494294ULL;
int zero = 0;
signed char var_18 = (signed char)12;
unsigned char var_19 = (unsigned char)236;
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
