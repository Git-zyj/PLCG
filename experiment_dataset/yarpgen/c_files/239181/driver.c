#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)8;
unsigned int var_1 = 995034753U;
unsigned int var_2 = 1073040364U;
unsigned char var_3 = (unsigned char)208;
long long int var_5 = 8567518977817605803LL;
int var_6 = -1122775001;
short var_7 = (short)5307;
unsigned char var_9 = (unsigned char)169;
int zero = 0;
short var_10 = (short)-18700;
unsigned char var_11 = (unsigned char)237;
unsigned char var_12 = (unsigned char)178;
void init() {
}

void checksum() {
    hash(&seed, var_10);
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
