#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 6583563715148186174LL;
unsigned short var_2 = (unsigned short)9804;
int var_6 = -991325843;
long long int var_9 = 3990397830032356364LL;
int var_10 = -1326045569;
int zero = 0;
unsigned short var_11 = (unsigned short)49389;
long long int var_12 = 6489171371940090442LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
