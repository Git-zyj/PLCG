#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52064;
unsigned char var_3 = (unsigned char)119;
_Bool var_4 = (_Bool)1;
unsigned short var_6 = (unsigned short)5646;
_Bool var_17 = (_Bool)1;
unsigned long long int var_18 = 14232931588211650288ULL;
int zero = 0;
long long int var_20 = 4019701540187210627LL;
unsigned long long int var_21 = 16442982442420418559ULL;
unsigned short var_22 = (unsigned short)43515;
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
