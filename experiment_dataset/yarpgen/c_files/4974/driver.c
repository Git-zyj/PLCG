#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 12102085695051517140ULL;
short var_8 = (short)-20258;
long long int var_12 = -5412560374201878030LL;
int zero = 0;
int var_20 = 1099524551;
unsigned char var_21 = (unsigned char)172;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
