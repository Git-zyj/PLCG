#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-2413;
unsigned char var_1 = (unsigned char)138;
long long int var_7 = 9078140751504605925LL;
unsigned short var_14 = (unsigned short)17579;
short var_15 = (short)5340;
int zero = 0;
short var_16 = (short)27675;
unsigned int var_17 = 2924047385U;
unsigned short var_18 = (unsigned short)30903;
void init() {
}

void checksum() {
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
