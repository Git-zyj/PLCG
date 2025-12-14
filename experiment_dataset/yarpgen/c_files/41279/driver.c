#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_13 = (unsigned char)2;
int var_14 = -1427575167;
long long int var_15 = 1169852515349788917LL;
unsigned char var_17 = (unsigned char)18;
unsigned short var_18 = (unsigned short)11978;
long long int var_19 = -3344964321689124459LL;
int zero = 0;
unsigned short var_20 = (unsigned short)26960;
_Bool var_21 = (_Bool)1;
long long int var_22 = 7899709349648816564LL;
void init() {
}

void checksum() {
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
