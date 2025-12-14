#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_4 = 9498775540562357445ULL;
unsigned char var_10 = (unsigned char)80;
unsigned char var_12 = (unsigned char)228;
long long int var_14 = 4576885701319571732LL;
signed char var_16 = (signed char)108;
unsigned int var_17 = 61627422U;
unsigned char var_19 = (unsigned char)133;
int zero = 0;
long long int var_20 = 2057454700677603707LL;
unsigned char var_21 = (unsigned char)78;
void init() {
}

void checksum() {
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
