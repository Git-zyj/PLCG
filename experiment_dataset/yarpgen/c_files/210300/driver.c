#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 7720882771090281194LL;
_Bool var_4 = (_Bool)0;
short var_5 = (short)-29096;
unsigned char var_8 = (unsigned char)95;
unsigned int var_12 = 1832054264U;
int zero = 0;
int var_19 = -1257717964;
unsigned short var_20 = (unsigned short)17839;
long long int var_21 = 4460765613119197773LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
