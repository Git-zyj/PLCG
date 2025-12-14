#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 11681896658044683134ULL;
unsigned char var_5 = (unsigned char)65;
long long int var_6 = -8494980705928972976LL;
int var_9 = 497952044;
int zero = 0;
unsigned long long int var_10 = 16908935576912808125ULL;
unsigned short var_11 = (unsigned short)61458;
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
