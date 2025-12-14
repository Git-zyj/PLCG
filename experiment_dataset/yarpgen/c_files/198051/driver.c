#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -67548940;
int var_4 = -1257076370;
signed char var_6 = (signed char)10;
long long int var_7 = 756889150358277315LL;
unsigned char var_8 = (unsigned char)169;
long long int var_15 = 3427850758020606467LL;
int zero = 0;
int var_18 = 1711145707;
long long int var_19 = -1560433860388523896LL;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
