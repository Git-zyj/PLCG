#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = -1845593505;
int var_8 = -246367876;
int var_9 = -624727123;
unsigned char var_10 = (unsigned char)229;
int zero = 0;
signed char var_12 = (signed char)37;
signed char var_13 = (signed char)-56;
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
