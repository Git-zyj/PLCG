#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_5 = (signed char)103;
signed char var_6 = (signed char)28;
unsigned long long int var_12 = 9714277752580356265ULL;
int var_13 = 1809612312;
int zero = 0;
unsigned short var_18 = (unsigned short)48864;
unsigned char var_19 = (unsigned char)132;
short var_20 = (short)36;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
