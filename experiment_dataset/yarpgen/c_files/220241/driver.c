#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)59;
_Bool var_2 = (_Bool)0;
unsigned long long int var_3 = 14253469662955863889ULL;
unsigned char var_6 = (unsigned char)50;
unsigned char var_8 = (unsigned char)106;
unsigned long long int var_14 = 1887481497975348029ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)117;
unsigned long long int var_17 = 6315522780986610886ULL;
void init() {
}

void checksum() {
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
