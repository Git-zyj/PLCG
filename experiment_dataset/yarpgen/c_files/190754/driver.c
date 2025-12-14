#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -7114784245437634328LL;
unsigned short var_3 = (unsigned short)33719;
long long int var_6 = -7118201461289172275LL;
short var_7 = (short)8016;
short var_13 = (short)31140;
unsigned short var_14 = (unsigned short)42971;
int zero = 0;
unsigned char var_18 = (unsigned char)156;
short var_19 = (short)23487;
unsigned char var_20 = (unsigned char)72;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
