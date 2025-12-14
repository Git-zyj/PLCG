#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_5 = 3828644441569712163LL;
unsigned short var_11 = (unsigned short)53441;
unsigned char var_17 = (unsigned char)144;
int zero = 0;
int var_19 = -1209565911;
unsigned long long int var_20 = 5641869966526584996ULL;
long long int var_21 = 778158627484309006LL;
short var_22 = (short)-8711;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
