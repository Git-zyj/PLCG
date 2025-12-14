#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_8 = (short)15669;
int var_10 = -1928450471;
unsigned long long int var_11 = 15119466932184031928ULL;
int zero = 0;
unsigned long long int var_16 = 12433730594479247297ULL;
signed char var_17 = (signed char)-26;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
