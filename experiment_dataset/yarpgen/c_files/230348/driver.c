#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-36;
unsigned long long int var_2 = 10638302689326376375ULL;
unsigned int var_3 = 647940700U;
int var_6 = -827222861;
unsigned long long int var_7 = 4730545314249963698ULL;
signed char var_8 = (signed char)76;
int zero = 0;
unsigned short var_10 = (unsigned short)53370;
unsigned char var_11 = (unsigned char)34;
_Bool var_12 = (_Bool)1;
signed char var_13 = (signed char)73;
unsigned long long int var_14 = 2965989582067467208ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
