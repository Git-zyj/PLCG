#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -913402772501511891LL;
signed char var_2 = (signed char)-89;
unsigned char var_5 = (unsigned char)111;
int zero = 0;
int var_12 = 527570482;
long long int var_13 = 4074682915811025583LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
