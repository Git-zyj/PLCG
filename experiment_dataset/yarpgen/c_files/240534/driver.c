#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)244;
signed char var_2 = (signed char)18;
unsigned long long int var_4 = 1659590026469357984ULL;
unsigned char var_5 = (unsigned char)150;
long long int var_6 = 8738274808682931504LL;
unsigned char var_9 = (unsigned char)211;
int zero = 0;
signed char var_10 = (signed char)-86;
unsigned char var_11 = (unsigned char)93;
unsigned short var_12 = (unsigned short)36293;
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
