#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)105;
long long int var_2 = 482358460202541633LL;
unsigned short var_3 = (unsigned short)34961;
int var_5 = 1415211406;
unsigned int var_6 = 2604645472U;
long long int var_7 = 8710647440186681489LL;
int zero = 0;
int var_10 = 1652243428;
unsigned int var_11 = 1596380271U;
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
