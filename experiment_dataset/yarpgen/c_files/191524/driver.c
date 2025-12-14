#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44085;
unsigned char var_4 = (unsigned char)76;
unsigned int var_5 = 4025923051U;
unsigned short var_13 = (unsigned short)3622;
unsigned char var_14 = (unsigned char)35;
int zero = 0;
unsigned int var_15 = 1257935248U;
unsigned char var_16 = (unsigned char)59;
long long int var_17 = 5641698522096298787LL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
