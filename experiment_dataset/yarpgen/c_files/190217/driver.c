#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)45164;
unsigned long long int var_4 = 11678561700066456573ULL;
unsigned long long int var_5 = 6403884975867649871ULL;
long long int var_6 = -7073002879682916559LL;
int zero = 0;
unsigned int var_15 = 3915601957U;
unsigned long long int var_16 = 16333049424378849225ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
