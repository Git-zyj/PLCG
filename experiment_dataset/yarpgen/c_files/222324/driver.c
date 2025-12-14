#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)22369;
unsigned int var_1 = 2544325549U;
long long int var_4 = -4697599496016213205LL;
unsigned char var_5 = (unsigned char)207;
unsigned char var_6 = (unsigned char)37;
unsigned int var_8 = 3590619712U;
long long int var_10 = 9034065266063855314LL;
int zero = 0;
unsigned int var_11 = 2806807220U;
unsigned int var_12 = 2549861124U;
unsigned short var_13 = (unsigned short)57663;
unsigned char var_14 = (unsigned char)76;
unsigned int var_15 = 2572046406U;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
