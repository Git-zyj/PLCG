#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)73;
unsigned long long int var_9 = 16935021100412445674ULL;
unsigned char var_14 = (unsigned char)36;
unsigned short var_19 = (unsigned short)62233;
int zero = 0;
unsigned int var_20 = 2667454522U;
unsigned char var_21 = (unsigned char)103;
long long int var_22 = 5883615185719509661LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
