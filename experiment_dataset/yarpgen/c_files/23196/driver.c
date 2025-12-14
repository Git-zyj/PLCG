#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)39179;
unsigned char var_1 = (unsigned char)89;
unsigned short var_6 = (unsigned short)11223;
unsigned short var_7 = (unsigned short)12439;
long long int var_8 = 6931145263816501289LL;
long long int var_9 = -8858083136317490944LL;
unsigned long long int var_10 = 12595408352013123660ULL;
long long int var_11 = 5321293154716401281LL;
unsigned long long int var_12 = 16996481047131614394ULL;
unsigned char var_14 = (unsigned char)22;
unsigned short var_16 = (unsigned short)30785;
int zero = 0;
unsigned short var_17 = (unsigned short)4101;
unsigned short var_18 = (unsigned short)23656;
_Bool var_19 = (_Bool)1;
unsigned short var_20 = (unsigned short)51202;
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
