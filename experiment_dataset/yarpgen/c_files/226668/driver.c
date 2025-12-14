#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_6 = 1898319654;
unsigned long long int var_7 = 17539102352609643298ULL;
unsigned char var_11 = (unsigned char)206;
unsigned long long int var_12 = 9761247946335779277ULL;
unsigned short var_14 = (unsigned short)40616;
int zero = 0;
int var_17 = 128468800;
_Bool var_18 = (_Bool)1;
_Bool var_19 = (_Bool)0;
unsigned long long int var_20 = 14961882277394634584ULL;
int var_21 = -1042851385;
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
