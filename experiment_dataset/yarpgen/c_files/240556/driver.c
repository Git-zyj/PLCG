#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)-15129;
unsigned char var_3 = (unsigned char)18;
unsigned char var_4 = (unsigned char)228;
long long int var_9 = -3988224394183828604LL;
long long int var_11 = 7001208007251051799LL;
unsigned short var_13 = (unsigned short)12077;
long long int var_14 = 3721169661031604682LL;
unsigned int var_17 = 3231370569U;
long long int var_19 = -1069215357830756311LL;
int zero = 0;
unsigned char var_20 = (unsigned char)60;
_Bool var_21 = (_Bool)1;
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
