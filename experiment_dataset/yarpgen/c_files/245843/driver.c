#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)46;
int var_5 = 1108079110;
_Bool var_7 = (_Bool)1;
unsigned long long int var_9 = 4619762002906395899ULL;
_Bool var_10 = (_Bool)0;
unsigned short var_11 = (unsigned short)35432;
long long int var_13 = -3233685779178801324LL;
unsigned char var_15 = (unsigned char)22;
int zero = 0;
unsigned long long int var_17 = 15507250015920702509ULL;
_Bool var_18 = (_Bool)1;
unsigned char var_19 = (unsigned char)121;
long long int var_20 = -7555634473943968893LL;
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
