#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = -2954310397226359389LL;
long long int var_2 = 2029266378641408813LL;
long long int var_5 = -6151985582153806075LL;
int var_8 = -844911894;
long long int var_11 = 4777444737429800672LL;
unsigned char var_13 = (unsigned char)4;
signed char var_14 = (signed char)103;
unsigned short var_18 = (unsigned short)19317;
int zero = 0;
short var_19 = (short)30691;
unsigned char var_20 = (unsigned char)237;
long long int var_21 = 3412777564620364011LL;
void init() {
}

void checksum() {
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
