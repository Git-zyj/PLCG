#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15181225605154813527ULL;
unsigned short var_1 = (unsigned short)46436;
long long int var_6 = 9184384440571455092LL;
int zero = 0;
unsigned long long int var_10 = 18100004750459362018ULL;
unsigned char var_11 = (unsigned char)103;
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
