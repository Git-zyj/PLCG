#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 9911703339676317900ULL;
unsigned long long int var_1 = 7992501331278181735ULL;
unsigned long long int var_2 = 11594053601849074901ULL;
unsigned long long int var_6 = 7684871409858891262ULL;
unsigned long long int var_10 = 18091787014143289240ULL;
int zero = 0;
unsigned long long int var_16 = 9431504431976030850ULL;
unsigned long long int var_17 = 14226574864411218441ULL;
unsigned long long int var_18 = 6816156664037949181ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
