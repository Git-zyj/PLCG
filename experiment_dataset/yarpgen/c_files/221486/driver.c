#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -159891151;
long long int var_3 = 7042434643392701083LL;
unsigned char var_6 = (unsigned char)197;
int var_8 = -617722349;
int zero = 0;
_Bool var_14 = (_Bool)0;
long long int var_15 = -1899896794114475657LL;
long long int var_16 = 3356141951363906158LL;
unsigned char var_17 = (unsigned char)208;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
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
