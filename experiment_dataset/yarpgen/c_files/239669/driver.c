#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1913463106;
int var_1 = -1836402714;
unsigned char var_5 = (unsigned char)17;
unsigned char var_9 = (unsigned char)74;
unsigned char var_12 = (unsigned char)112;
int var_13 = 2041124245;
int zero = 0;
unsigned char var_14 = (unsigned char)58;
_Bool var_15 = (_Bool)1;
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
