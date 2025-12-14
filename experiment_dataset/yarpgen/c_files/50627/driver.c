#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)183;
short var_2 = (short)31574;
unsigned long long int var_5 = 5374096921806867159ULL;
long long int var_9 = -5573832659003951190LL;
int zero = 0;
_Bool var_14 = (_Bool)0;
short var_15 = (short)-6407;
unsigned long long int var_16 = 17995276787731592778ULL;
unsigned char var_17 = (unsigned char)169;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
