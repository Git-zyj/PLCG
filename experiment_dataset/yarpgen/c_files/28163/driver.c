#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)60074;
unsigned char var_1 = (unsigned char)157;
_Bool var_2 = (_Bool)1;
long long int var_3 = 7492230984079159467LL;
unsigned char var_4 = (unsigned char)211;
unsigned short var_6 = (unsigned short)60422;
_Bool var_11 = (_Bool)1;
unsigned long long int var_12 = 9872352099252571454ULL;
int zero = 0;
unsigned long long int var_13 = 15871232764038896457ULL;
_Bool var_14 = (_Bool)0;
long long int var_15 = 9206053738255329093LL;
unsigned int var_16 = 1927214319U;
unsigned short var_17 = (unsigned short)14675;
int var_18 = 96452307;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
