#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)9593;
unsigned char var_9 = (unsigned char)89;
unsigned char var_13 = (unsigned char)167;
_Bool var_14 = (_Bool)1;
unsigned char var_15 = (unsigned char)146;
int zero = 0;
unsigned short var_17 = (unsigned short)9207;
unsigned short var_18 = (unsigned short)36100;
void init() {
}

void checksum() {
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
