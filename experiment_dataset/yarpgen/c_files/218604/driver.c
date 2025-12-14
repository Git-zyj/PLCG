#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)120;
unsigned short var_6 = (unsigned short)60478;
long long int var_8 = 4085754249841081091LL;
unsigned short var_14 = (unsigned short)40889;
int zero = 0;
long long int var_18 = -4093743363331748826LL;
unsigned short var_19 = (unsigned short)20960;
void init() {
}

void checksum() {
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
