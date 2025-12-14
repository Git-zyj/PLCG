#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)11565;
unsigned char var_7 = (unsigned char)156;
unsigned short var_9 = (unsigned short)12178;
unsigned short var_10 = (unsigned short)55825;
unsigned short var_11 = (unsigned short)10192;
unsigned char var_14 = (unsigned char)155;
signed char var_16 = (signed char)127;
unsigned short var_18 = (unsigned short)40331;
int zero = 0;
unsigned short var_19 = (unsigned short)12505;
unsigned char var_20 = (unsigned char)79;
unsigned short var_21 = (unsigned short)8540;
unsigned short var_22 = (unsigned short)47609;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
