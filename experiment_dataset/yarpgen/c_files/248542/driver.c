#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_2 = -1228455960;
unsigned int var_4 = 296689886U;
unsigned long long int var_5 = 15083473644888085455ULL;
unsigned int var_6 = 870483330U;
unsigned short var_8 = (unsigned short)42433;
int var_9 = -478294814;
unsigned int var_10 = 907333961U;
int var_11 = -664364384;
unsigned char var_15 = (unsigned char)134;
int zero = 0;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 5977547463902777727ULL;
unsigned int var_19 = 1252532352U;
unsigned short var_20 = (unsigned short)3154;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)176;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
