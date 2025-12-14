#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)-89;
unsigned int var_2 = 1781590120U;
unsigned char var_4 = (unsigned char)184;
unsigned short var_5 = (unsigned short)55007;
signed char var_7 = (signed char)-54;
unsigned int var_8 = 4158355788U;
long long int var_9 = 8068310205211763732LL;
unsigned int var_10 = 2901826686U;
int zero = 0;
_Bool var_11 = (_Bool)1;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)44596;
unsigned short var_14 = (unsigned short)51669;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
