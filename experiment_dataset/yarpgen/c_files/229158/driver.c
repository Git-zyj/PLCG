#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1327553270;
long long int var_5 = -3132032247661730570LL;
unsigned char var_7 = (unsigned char)8;
int zero = 0;
unsigned int var_10 = 3308339512U;
short var_11 = (short)-4701;
unsigned char var_12 = (unsigned char)61;
unsigned char var_13 = (unsigned char)183;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
