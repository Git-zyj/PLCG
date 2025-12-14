#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_3 = (_Bool)0;
int var_14 = -1460415785;
int zero = 0;
unsigned long long int var_20 = 9311438498076536505ULL;
long long int var_21 = -3881001016232393148LL;
unsigned long long int var_22 = 5908658220477957025ULL;
unsigned char var_23 = (unsigned char)9;
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
