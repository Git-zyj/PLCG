#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 4118489708U;
long long int var_3 = 8915287366629415190LL;
long long int var_6 = -505282874511454943LL;
unsigned short var_7 = (unsigned short)8865;
short var_8 = (short)-18673;
unsigned short var_9 = (unsigned short)47591;
long long int var_13 = 4987238472776794800LL;
unsigned short var_14 = (unsigned short)48055;
unsigned int var_15 = 3971097581U;
int zero = 0;
int var_16 = 638135410;
unsigned int var_17 = 346717971U;
long long int var_18 = 7876149571455826623LL;
signed char var_19 = (signed char)81;
unsigned int var_20 = 3204402087U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
