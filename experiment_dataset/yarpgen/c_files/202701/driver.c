#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_3 = 3972289117U;
long long int var_4 = 2548481305990342032LL;
unsigned char var_5 = (unsigned char)221;
unsigned long long int var_7 = 17631402427499866446ULL;
unsigned char var_8 = (unsigned char)1;
long long int var_10 = -4785518667486624772LL;
int zero = 0;
unsigned long long int var_11 = 10794374749084557456ULL;
long long int var_12 = -7192000990305865791LL;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
