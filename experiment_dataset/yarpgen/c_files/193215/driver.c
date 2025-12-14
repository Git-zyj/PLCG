#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_6 = (unsigned char)74;
unsigned char var_8 = (unsigned char)6;
int var_10 = -1327671495;
unsigned char var_11 = (unsigned char)212;
signed char var_18 = (signed char)38;
int zero = 0;
long long int var_20 = -5655031161839321572LL;
long long int var_21 = -343294084661694824LL;
unsigned long long int var_22 = 10855293747361141016ULL;
unsigned long long int var_23 = 15642260077726390865ULL;
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
