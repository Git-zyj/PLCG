#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1458685526;
signed char var_1 = (signed char)-105;
signed char var_2 = (signed char)28;
unsigned long long int var_3 = 16709833385481301706ULL;
signed char var_4 = (signed char)106;
unsigned char var_5 = (unsigned char)202;
short var_6 = (short)2493;
unsigned char var_7 = (unsigned char)41;
unsigned char var_8 = (unsigned char)68;
unsigned short var_9 = (unsigned short)28992;
int zero = 0;
_Bool var_10 = (_Bool)1;
int var_11 = 1162094862;
int var_12 = 1056220895;
long long int var_13 = -39005770037508662LL;
unsigned char var_14 = (unsigned char)175;
unsigned short var_15 = (unsigned short)1633;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
