#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 8118309712192748052ULL;
long long int var_8 = -3197004763544176925LL;
unsigned long long int var_9 = 14821278692660426144ULL;
int zero = 0;
unsigned long long int var_10 = 5861430864351988009ULL;
long long int var_11 = 838984284855671346LL;
unsigned int var_12 = 2994124852U;
unsigned char var_13 = (unsigned char)202;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
