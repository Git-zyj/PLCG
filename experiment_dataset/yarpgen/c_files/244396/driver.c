#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 680088829502478465LL;
long long int var_1 = 7760681379081514730LL;
unsigned long long int var_3 = 7593373638999284848ULL;
signed char var_4 = (signed char)47;
unsigned char var_5 = (unsigned char)228;
short var_6 = (short)23269;
unsigned int var_8 = 3406896492U;
unsigned int var_9 = 2378702412U;
signed char var_11 = (signed char)-5;
long long int var_13 = 3993537928178932279LL;
unsigned int var_14 = 3174300442U;
int var_15 = 1489408515;
int var_16 = -4200247;
unsigned char var_18 = (unsigned char)234;
int zero = 0;
short var_19 = (short)29522;
_Bool var_20 = (_Bool)1;
unsigned short var_21 = (unsigned short)58558;
void init() {
}

void checksum() {
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
