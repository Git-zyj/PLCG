#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)29156;
unsigned short var_5 = (unsigned short)18374;
long long int var_10 = -2271370994792662148LL;
int var_11 = -40958789;
int var_12 = -2110756309;
long long int var_13 = -8158712085630158592LL;
signed char var_14 = (signed char)-90;
int zero = 0;
short var_15 = (short)-30892;
int var_16 = 1449828654;
unsigned char var_17 = (unsigned char)21;
short var_18 = (short)-6951;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
