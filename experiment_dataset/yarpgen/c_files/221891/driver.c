#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_4 = (unsigned char)23;
short var_5 = (short)-25918;
unsigned short var_11 = (unsigned short)9898;
long long int var_12 = -3541773397722338671LL;
int zero = 0;
long long int var_18 = 1601609813644250830LL;
short var_19 = (short)4834;
unsigned char var_20 = (unsigned char)140;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
