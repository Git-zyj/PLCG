#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -1556276081;
unsigned short var_4 = (unsigned short)6560;
int var_6 = 1834302820;
int var_13 = -968977937;
int zero = 0;
unsigned long long int var_15 = 13381929033702816375ULL;
unsigned short var_16 = (unsigned short)26384;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
