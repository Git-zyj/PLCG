#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-71;
signed char var_2 = (signed char)-119;
signed char var_4 = (signed char)38;
unsigned long long int var_8 = 15040056462643098221ULL;
unsigned long long int var_9 = 15699727403869733050ULL;
short var_12 = (short)2651;
unsigned int var_15 = 2868887314U;
unsigned char var_16 = (unsigned char)203;
int zero = 0;
long long int var_18 = -3884494838511305153LL;
long long int var_19 = 8962990516858586778LL;
unsigned char var_20 = (unsigned char)43;
unsigned int var_21 = 4064795015U;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
