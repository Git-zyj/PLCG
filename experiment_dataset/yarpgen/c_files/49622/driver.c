#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -7354540599903344685LL;
short var_4 = (short)15791;
unsigned short var_7 = (unsigned short)5691;
long long int var_11 = 6438561343415602213LL;
int zero = 0;
long long int var_20 = -4023020863308939847LL;
long long int var_21 = -1564403111451077797LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
