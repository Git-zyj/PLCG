#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = -1092548812177520324LL;
unsigned long long int var_6 = 15674590565140642120ULL;
unsigned short var_11 = (unsigned short)50312;
int zero = 0;
unsigned char var_12 = (unsigned char)32;
unsigned short var_13 = (unsigned short)36900;
unsigned char var_14 = (unsigned char)169;
signed char var_15 = (signed char)-90;
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
