#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1380615639;
_Bool var_1 = (_Bool)1;
long long int var_2 = 2339280003909445413LL;
int var_3 = 1157802272;
_Bool var_4 = (_Bool)1;
_Bool var_5 = (_Bool)1;
unsigned long long int var_7 = 280819816074926692ULL;
unsigned long long int var_8 = 8892845676264221451ULL;
long long int var_9 = -3946571930342847154LL;
unsigned long long int var_10 = 3439311482683573085ULL;
signed char var_11 = (signed char)-115;
unsigned short var_12 = (unsigned short)52382;
int var_14 = -1568737989;
unsigned short var_15 = (unsigned short)40663;
unsigned long long int var_16 = 937393729518688172ULL;
int var_17 = -742736105;
int var_18 = 1302226327;
int zero = 0;
signed char var_19 = (signed char)84;
signed char var_20 = (signed char)98;
unsigned char var_21 = (unsigned char)14;
unsigned long long int var_22 = 15588507206004103381ULL;
unsigned char var_23 = (unsigned char)192;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
