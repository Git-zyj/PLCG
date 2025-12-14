#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)84;
unsigned short var_1 = (unsigned short)5980;
signed char var_2 = (signed char)82;
unsigned char var_3 = (unsigned char)133;
long long int var_4 = 463065897042502775LL;
int var_5 = -1714444182;
long long int var_6 = -3206991229861113793LL;
unsigned char var_8 = (unsigned char)149;
short var_11 = (short)6195;
unsigned char var_12 = (unsigned char)205;
int zero = 0;
unsigned long long int var_13 = 4349860787786336264ULL;
short var_14 = (short)21709;
short var_15 = (short)20219;
unsigned short var_16 = (unsigned short)48704;
void init() {
}

void checksum() {
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
