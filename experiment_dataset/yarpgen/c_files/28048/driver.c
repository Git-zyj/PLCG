#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)32;
unsigned short var_2 = (unsigned short)22887;
long long int var_3 = 223612135140626151LL;
unsigned long long int var_6 = 18299180296732004239ULL;
short var_7 = (short)-905;
unsigned int var_9 = 1773947602U;
int zero = 0;
unsigned int var_12 = 3303062785U;
unsigned long long int var_13 = 12380893431793156989ULL;
unsigned long long int var_14 = 6008932781868838192ULL;
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
