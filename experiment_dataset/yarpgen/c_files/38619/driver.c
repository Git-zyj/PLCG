#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_4 = (short)-12137;
unsigned long long int var_6 = 10728789202740893533ULL;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned short var_13 = (unsigned short)45142;
_Bool var_14 = (_Bool)0;
unsigned short var_15 = (unsigned short)47755;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
