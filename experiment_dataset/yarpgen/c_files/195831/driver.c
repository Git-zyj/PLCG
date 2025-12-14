#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)248;
unsigned long long int var_2 = 14963416781046545689ULL;
unsigned short var_5 = (unsigned short)35500;
signed char var_6 = (signed char)-40;
unsigned long long int var_7 = 16725594477996673154ULL;
int zero = 0;
long long int var_10 = -6884682209635632833LL;
unsigned char var_11 = (unsigned char)202;
long long int var_12 = -981584483108386927LL;
unsigned long long int var_13 = 10747873901790788330ULL;
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
