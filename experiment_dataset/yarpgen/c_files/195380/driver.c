#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 15324713457232632417ULL;
unsigned char var_10 = (unsigned char)62;
unsigned short var_11 = (unsigned short)55156;
_Bool var_13 = (_Bool)0;
unsigned long long int var_17 = 4745576957984619589ULL;
unsigned char var_18 = (unsigned char)32;
int zero = 0;
short var_19 = (short)-4007;
short var_20 = (short)722;
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
