#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 12517554660793663158ULL;
unsigned short var_4 = (unsigned short)133;
signed char var_5 = (signed char)23;
short var_7 = (short)13679;
long long int var_13 = -509747784326531923LL;
unsigned char var_17 = (unsigned char)255;
int zero = 0;
long long int var_19 = -815090622977105577LL;
unsigned int var_20 = 393503333U;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
