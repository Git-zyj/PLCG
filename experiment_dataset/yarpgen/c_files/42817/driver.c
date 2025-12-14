#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1563941671;
unsigned short var_3 = (unsigned short)19738;
unsigned char var_8 = (unsigned char)97;
unsigned short var_10 = (unsigned short)53513;
int zero = 0;
unsigned long long int var_11 = 9957640559929933448ULL;
unsigned long long int var_12 = 8356760640545218882ULL;
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
