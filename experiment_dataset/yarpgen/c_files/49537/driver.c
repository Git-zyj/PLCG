#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)8062;
long long int var_4 = 6470367136461403050LL;
long long int var_5 = 8491031327997883763LL;
unsigned int var_7 = 3529055534U;
int zero = 0;
short var_12 = (short)-6849;
unsigned char var_13 = (unsigned char)195;
long long int var_14 = 3466757919182795294LL;
long long int var_15 = 7802066029404769238LL;
unsigned short var_16 = (unsigned short)45671;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
