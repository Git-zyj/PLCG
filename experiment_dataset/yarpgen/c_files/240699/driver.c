#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)-10;
_Bool var_8 = (_Bool)1;
long long int var_10 = -1869490477763094143LL;
unsigned short var_11 = (unsigned short)55165;
int zero = 0;
short var_13 = (short)-6893;
unsigned char var_14 = (unsigned char)106;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
