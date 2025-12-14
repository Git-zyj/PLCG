#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15688532285112472845ULL;
unsigned char var_1 = (unsigned char)66;
unsigned int var_8 = 1327173185U;
unsigned short var_14 = (unsigned short)17353;
short var_15 = (short)14735;
short var_17 = (short)9146;
int zero = 0;
unsigned int var_20 = 3636687912U;
unsigned long long int var_21 = 1626726539700558568ULL;
unsigned char var_22 = (unsigned char)237;
void init() {
}

void checksum() {
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
