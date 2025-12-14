#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 4232576887U;
unsigned int var_1 = 3743904943U;
unsigned char var_2 = (unsigned char)176;
unsigned char var_3 = (unsigned char)54;
unsigned char var_4 = (unsigned char)110;
unsigned char var_6 = (unsigned char)244;
short var_7 = (short)6491;
_Bool var_11 = (_Bool)0;
signed char var_12 = (signed char)106;
unsigned long long int var_15 = 15695420480240657127ULL;
signed char var_19 = (signed char)103;
int zero = 0;
unsigned char var_20 = (unsigned char)36;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)192;
int var_23 = 1240709133;
long long int var_24 = 8525952101238411001LL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
