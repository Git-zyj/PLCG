#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)252;
signed char var_3 = (signed char)-60;
unsigned short var_4 = (unsigned short)5619;
short var_5 = (short)-15001;
unsigned long long int var_7 = 10293536590695739399ULL;
unsigned long long int var_12 = 12750264580309138214ULL;
signed char var_15 = (signed char)125;
int zero = 0;
unsigned char var_18 = (unsigned char)3;
unsigned short var_19 = (unsigned short)22165;
_Bool var_20 = (_Bool)1;
int var_21 = -756224191;
unsigned char var_22 = (unsigned char)78;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
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
