#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)75;
long long int var_2 = -2019654643828829193LL;
long long int var_3 = -1841889381554521104LL;
unsigned char var_4 = (unsigned char)175;
signed char var_6 = (signed char)-45;
unsigned char var_8 = (unsigned char)186;
unsigned char var_9 = (unsigned char)37;
long long int var_10 = 3293291642117952609LL;
int zero = 0;
short var_11 = (short)17614;
unsigned int var_12 = 621521157U;
_Bool var_13 = (_Bool)1;
short var_14 = (short)-13010;
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
