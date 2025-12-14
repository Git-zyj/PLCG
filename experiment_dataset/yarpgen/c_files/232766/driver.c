#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 300668818U;
int var_10 = -1724748740;
int var_11 = 1561933676;
unsigned int var_12 = 2185153634U;
int zero = 0;
unsigned char var_19 = (unsigned char)122;
unsigned short var_20 = (unsigned short)45827;
signed char var_21 = (signed char)-76;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
