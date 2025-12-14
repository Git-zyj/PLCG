#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_5 = 14037032607635274269ULL;
unsigned long long int var_6 = 7535594912561597806ULL;
short var_7 = (short)-18147;
short var_8 = (short)1615;
_Bool var_11 = (_Bool)0;
int zero = 0;
unsigned char var_20 = (unsigned char)170;
_Bool var_21 = (_Bool)0;
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
