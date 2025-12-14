#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)1273;
unsigned char var_2 = (unsigned char)7;
unsigned char var_3 = (unsigned char)112;
unsigned short var_5 = (unsigned short)2752;
unsigned int var_8 = 2103987285U;
unsigned int var_9 = 4139929367U;
unsigned short var_10 = (unsigned short)54125;
unsigned char var_11 = (unsigned char)50;
int zero = 0;
unsigned int var_12 = 2120542064U;
unsigned char var_13 = (unsigned char)81;
unsigned short var_14 = (unsigned short)58189;
long long int var_15 = -7579377967672836832LL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
