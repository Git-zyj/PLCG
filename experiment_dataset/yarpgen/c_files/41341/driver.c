#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)-12559;
signed char var_5 = (signed char)-62;
unsigned int var_8 = 3134671495U;
unsigned int var_9 = 612312847U;
long long int var_10 = -8722900772507357362LL;
unsigned char var_12 = (unsigned char)162;
signed char var_15 = (signed char)-90;
int zero = 0;
unsigned int var_16 = 1999652680U;
unsigned int var_17 = 3313894536U;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
