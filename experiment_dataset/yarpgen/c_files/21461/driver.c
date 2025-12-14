#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1725381063;
unsigned long long int var_2 = 1841295824677549995ULL;
short var_4 = (short)7192;
signed char var_7 = (signed char)40;
unsigned short var_8 = (unsigned short)54163;
unsigned short var_9 = (unsigned short)54545;
int zero = 0;
long long int var_10 = 1649732319904423LL;
unsigned short var_11 = (unsigned short)17508;
unsigned short var_12 = (unsigned short)39613;
unsigned char var_13 = (unsigned char)157;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
