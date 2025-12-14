#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1912656282;
unsigned char var_2 = (unsigned char)68;
int var_3 = -1913237971;
int var_6 = -1036490869;
int zero = 0;
signed char var_11 = (signed char)-9;
signed char var_12 = (signed char)-116;
unsigned char var_13 = (unsigned char)93;
unsigned char var_14 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
