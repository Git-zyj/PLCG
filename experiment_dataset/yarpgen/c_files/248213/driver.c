#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_2 = (short)785;
unsigned char var_7 = (unsigned char)76;
_Bool var_8 = (_Bool)0;
unsigned char var_10 = (unsigned char)129;
long long int var_12 = 1154781796037037817LL;
int zero = 0;
unsigned short var_18 = (unsigned short)51349;
unsigned int var_19 = 2446532070U;
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
