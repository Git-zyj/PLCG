#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1524600764U;
signed char var_4 = (signed char)-9;
unsigned long long int var_7 = 15923363551354991530ULL;
unsigned int var_9 = 4291948362U;
unsigned char var_11 = (unsigned char)181;
int zero = 0;
unsigned char var_18 = (unsigned char)214;
unsigned char var_19 = (unsigned char)146;
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
