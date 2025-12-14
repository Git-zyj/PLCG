#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_1 = 10448976064168765303ULL;
int var_5 = 1710284539;
unsigned short var_6 = (unsigned short)6664;
unsigned char var_7 = (unsigned char)230;
unsigned long long int var_8 = 7651505551361513287ULL;
unsigned int var_9 = 1188798012U;
unsigned long long int var_10 = 13917700577712820987ULL;
unsigned short var_13 = (unsigned short)45072;
_Bool var_14 = (_Bool)1;
int zero = 0;
unsigned short var_16 = (unsigned short)53890;
unsigned long long int var_17 = 18061669469030731707ULL;
signed char var_18 = (signed char)-37;
unsigned long long int var_19 = 499079623632390099ULL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
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
