#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-31792;
int var_4 = 541405171;
unsigned long long int var_7 = 7218601861171028516ULL;
unsigned long long int var_8 = 15035328922218880654ULL;
int zero = 0;
unsigned long long int var_12 = 13729428202943097953ULL;
unsigned short var_13 = (unsigned short)24802;
unsigned char var_14 = (unsigned char)220;
long long int var_15 = 126878705122079983LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
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
