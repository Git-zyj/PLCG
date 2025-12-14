#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5580304870139662028LL;
unsigned char var_6 = (unsigned char)87;
int var_7 = 781215992;
int var_9 = 915115097;
int zero = 0;
unsigned char var_10 = (unsigned char)29;
unsigned char var_11 = (unsigned char)145;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
