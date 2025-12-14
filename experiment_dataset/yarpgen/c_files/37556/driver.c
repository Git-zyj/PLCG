#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)74;
_Bool var_4 = (_Bool)0;
unsigned char var_11 = (unsigned char)113;
int zero = 0;
long long int var_20 = -812868498728204329LL;
unsigned short var_21 = (unsigned short)37473;
unsigned long long int var_22 = 14253785948976787426ULL;
unsigned int var_23 = 3812117430U;
unsigned short var_24 = (unsigned short)19144;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
