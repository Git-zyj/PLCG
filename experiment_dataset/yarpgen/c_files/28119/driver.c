#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_7 = -6993080649729767618LL;
unsigned char var_11 = (unsigned char)77;
unsigned char var_13 = (unsigned char)189;
int zero = 0;
unsigned char var_20 = (unsigned char)38;
unsigned int var_21 = 1310309968U;
unsigned char var_22 = (unsigned char)202;
long long int var_23 = -1953294591899362518LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
