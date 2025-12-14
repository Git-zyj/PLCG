#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)118;
signed char var_3 = (signed char)26;
signed char var_4 = (signed char)21;
unsigned int var_5 = 1629133230U;
long long int var_7 = 4448921842949237371LL;
unsigned long long int var_10 = 12332234870345021442ULL;
int zero = 0;
unsigned long long int var_12 = 13979767166853969990ULL;
unsigned short var_13 = (unsigned short)54072;
signed char var_14 = (signed char)-105;
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
