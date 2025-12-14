#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)37;
unsigned long long int var_1 = 15239778639097263521ULL;
_Bool var_2 = (_Bool)0;
short var_4 = (short)28992;
unsigned short var_6 = (unsigned short)7910;
unsigned short var_7 = (unsigned short)56350;
unsigned short var_8 = (unsigned short)16473;
unsigned short var_10 = (unsigned short)47989;
long long int var_11 = 8120859236938793319LL;
int zero = 0;
long long int var_12 = 7298215622666047839LL;
unsigned short var_13 = (unsigned short)32450;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
