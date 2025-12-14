#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_4 = 1208567591;
_Bool var_6 = (_Bool)0;
unsigned long long int var_10 = 10767974027129233956ULL;
int zero = 0;
int var_11 = -901636906;
unsigned short var_12 = (unsigned short)6841;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
