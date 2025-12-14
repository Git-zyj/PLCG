#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)145;
unsigned int var_2 = 2299723412U;
unsigned char var_8 = (unsigned char)230;
long long int var_9 = -7700201661518386036LL;
unsigned int var_12 = 680411245U;
long long int var_13 = 2491437979742948564LL;
unsigned short var_14 = (unsigned short)21323;
int zero = 0;
unsigned char var_15 = (unsigned char)3;
signed char var_16 = (signed char)-65;
unsigned int var_17 = 2064094132U;
unsigned short var_18 = (unsigned short)7063;
signed char var_19 = (signed char)37;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
