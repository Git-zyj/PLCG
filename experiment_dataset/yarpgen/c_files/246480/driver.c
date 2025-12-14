#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_1 = (_Bool)0;
unsigned short var_2 = (unsigned short)20520;
unsigned char var_3 = (unsigned char)115;
unsigned char var_5 = (unsigned char)194;
long long int var_8 = -821992210052829909LL;
int zero = 0;
unsigned long long int var_18 = 14900765494027682030ULL;
short var_19 = (short)-13511;
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
