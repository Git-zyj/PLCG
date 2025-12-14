#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_5 = (unsigned char)12;
long long int var_8 = 7798893898798834746LL;
long long int var_11 = 3144766398363494948LL;
int zero = 0;
unsigned long long int var_12 = 8018880620591891831ULL;
int var_13 = 13179209;
unsigned long long int var_14 = 13605660878971333545ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
