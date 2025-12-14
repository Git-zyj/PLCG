#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)60052;
unsigned short var_4 = (unsigned short)50216;
int zero = 0;
int var_12 = 864168962;
long long int var_13 = -5291599157292628588LL;
unsigned char var_14 = (unsigned char)128;
long long int var_15 = -4066027585894797082LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
