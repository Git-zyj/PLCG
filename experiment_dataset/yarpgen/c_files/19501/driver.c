#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-88;
unsigned char var_5 = (unsigned char)164;
unsigned short var_8 = (unsigned short)23468;
signed char var_9 = (signed char)121;
signed char var_10 = (signed char)44;
unsigned long long int var_12 = 14626530067885980284ULL;
int zero = 0;
unsigned long long int var_13 = 13145583463478129653ULL;
unsigned long long int var_14 = 947441130380515322ULL;
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
