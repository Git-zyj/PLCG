#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_0 = (short)-15480;
_Bool var_1 = (_Bool)1;
int var_2 = 1755997266;
unsigned int var_3 = 4062218408U;
unsigned char var_4 = (unsigned char)89;
int var_5 = 472941211;
short var_6 = (short)31107;
unsigned short var_7 = (unsigned short)25440;
unsigned long long int var_8 = 5222048214215015371ULL;
unsigned char var_9 = (unsigned char)30;
int var_10 = -1191621782;
long long int var_11 = -8572893993052799938LL;
unsigned short var_13 = (unsigned short)49969;
unsigned long long int var_15 = 717235232122631645ULL;
unsigned long long int var_16 = 644399345561772712ULL;
int zero = 0;
short var_17 = (short)25220;
unsigned short var_18 = (unsigned short)7217;
int var_19 = 1190575611;
unsigned long long int var_20 = 6688280400980597614ULL;
short var_21 = (short)-22868;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
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
