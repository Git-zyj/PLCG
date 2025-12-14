#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 14555524895666302081ULL;
unsigned char var_3 = (unsigned char)38;
unsigned long long int var_4 = 3205943338161427667ULL;
unsigned char var_5 = (unsigned char)244;
unsigned long long int var_6 = 12160095015742339151ULL;
long long int var_7 = 3701194167475501964LL;
signed char var_8 = (signed char)-70;
unsigned long long int var_9 = 2979712040501340901ULL;
int zero = 0;
unsigned int var_10 = 1687897132U;
unsigned short var_11 = (unsigned short)16903;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
