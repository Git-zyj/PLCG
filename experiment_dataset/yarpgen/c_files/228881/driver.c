#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_6 = 7468745668025798160LL;
unsigned short var_8 = (unsigned short)14594;
long long int var_11 = -1281475236776204562LL;
unsigned char var_12 = (unsigned char)99;
unsigned long long int var_15 = 6077297054811405062ULL;
int zero = 0;
unsigned char var_16 = (unsigned char)235;
int var_17 = -167280225;
unsigned char var_18 = (unsigned char)234;
unsigned long long int var_19 = 10937745396462034067ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
