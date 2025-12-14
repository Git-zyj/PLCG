#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_2 = (unsigned char)255;
unsigned char var_3 = (unsigned char)60;
signed char var_5 = (signed char)-73;
int var_6 = 821223227;
unsigned long long int var_9 = 11053105510771519782ULL;
long long int var_10 = 5644867130185558018LL;
unsigned char var_11 = (unsigned char)27;
long long int var_12 = 2570197399120529437LL;
int var_13 = -1602684406;
unsigned short var_14 = (unsigned short)36610;
int zero = 0;
unsigned short var_15 = (unsigned short)34446;
unsigned short var_16 = (unsigned short)34112;
unsigned long long int var_17 = 1995816208968827958ULL;
_Bool var_18 = (_Bool)1;
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
