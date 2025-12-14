#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)146;
int var_1 = -2005172303;
unsigned long long int var_2 = 6847333590237816403ULL;
unsigned int var_4 = 3142190428U;
long long int var_6 = 2077255179551625517LL;
unsigned short var_7 = (unsigned short)19415;
unsigned char var_9 = (unsigned char)31;
unsigned int var_12 = 241896675U;
unsigned long long int var_13 = 1919620179026885747ULL;
int var_14 = -99720245;
unsigned int var_16 = 2726886673U;
int zero = 0;
unsigned short var_19 = (unsigned short)65209;
signed char var_20 = (signed char)68;
void init() {
}

void checksum() {
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
