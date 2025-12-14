#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 16872774652922819110ULL;
unsigned short var_9 = (unsigned short)16025;
signed char var_11 = (signed char)119;
int zero = 0;
unsigned char var_13 = (unsigned char)202;
long long int var_14 = -8353511464248994990LL;
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
