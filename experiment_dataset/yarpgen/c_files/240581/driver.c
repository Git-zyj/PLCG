#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)2;
unsigned long long int var_4 = 13174644142479785366ULL;
int var_6 = -1989784414;
unsigned char var_8 = (unsigned char)249;
int var_9 = -1145633448;
int zero = 0;
_Bool var_10 = (_Bool)1;
long long int var_11 = 3647678217695799032LL;
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
