#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 3580806749U;
_Bool var_3 = (_Bool)1;
long long int var_4 = -3931874683027134286LL;
unsigned char var_6 = (unsigned char)117;
short var_8 = (short)-2332;
long long int var_10 = 3468057147309914247LL;
unsigned char var_11 = (unsigned char)81;
unsigned short var_12 = (unsigned short)2932;
int zero = 0;
unsigned char var_18 = (unsigned char)111;
unsigned short var_19 = (unsigned short)41129;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
