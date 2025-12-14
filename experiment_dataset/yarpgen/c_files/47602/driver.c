#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)12350;
_Bool var_2 = (_Bool)0;
long long int var_5 = 6986367204315852394LL;
unsigned long long int var_7 = 2758268870089993656ULL;
unsigned short var_10 = (unsigned short)57557;
long long int var_12 = 1748906222215427775LL;
unsigned char var_14 = (unsigned char)133;
int var_15 = -206917112;
int zero = 0;
_Bool var_17 = (_Bool)1;
_Bool var_18 = (_Bool)1;
unsigned int var_19 = 3847235398U;
_Bool var_20 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
