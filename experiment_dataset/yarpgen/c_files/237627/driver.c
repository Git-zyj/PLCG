#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-110;
long long int var_4 = -81952630156770117LL;
unsigned short var_7 = (unsigned short)23047;
unsigned long long int var_10 = 14538626234042612551ULL;
unsigned char var_16 = (unsigned char)207;
unsigned char var_18 = (unsigned char)72;
int zero = 0;
int var_20 = 1732575274;
unsigned long long int var_21 = 15715693665243429751ULL;
unsigned char var_22 = (unsigned char)170;
int var_23 = -1877377889;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
