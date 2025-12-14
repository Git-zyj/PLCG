#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 8782341447468086246ULL;
unsigned long long int var_2 = 9626895017977410618ULL;
unsigned long long int var_5 = 15092187706452584093ULL;
_Bool var_8 = (_Bool)0;
int var_11 = 106618671;
int zero = 0;
unsigned int var_12 = 114642610U;
unsigned short var_13 = (unsigned short)52010;
unsigned char var_14 = (unsigned char)163;
void init() {
}

void checksum() {
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
