#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3700806875U;
long long int var_3 = 441771636829265577LL;
unsigned char var_10 = (unsigned char)250;
int zero = 0;
unsigned long long int var_13 = 12399606222113102902ULL;
unsigned long long int var_14 = 18148419498168794353ULL;
void init() {
}

void checksum() {
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
