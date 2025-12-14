#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_3 = 2866535121605744108ULL;
int var_5 = 580309310;
unsigned char var_6 = (unsigned char)247;
unsigned char var_10 = (unsigned char)193;
long long int var_11 = 7569013039002527145LL;
unsigned char var_12 = (unsigned char)202;
unsigned char var_13 = (unsigned char)131;
unsigned char var_14 = (unsigned char)156;
unsigned char var_15 = (unsigned char)12;
long long int var_17 = 682600077598468305LL;
int zero = 0;
unsigned char var_20 = (unsigned char)151;
unsigned char var_21 = (unsigned char)91;
unsigned char var_22 = (unsigned char)247;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
