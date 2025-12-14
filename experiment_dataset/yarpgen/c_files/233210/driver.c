#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_8 = -148049137;
unsigned short var_13 = (unsigned short)52666;
unsigned char var_15 = (unsigned char)202;
int zero = 0;
unsigned long long int var_17 = 14747514618854993277ULL;
long long int var_18 = -1966598471250781610LL;
_Bool var_19 = (_Bool)0;
unsigned int var_20 = 3642105051U;
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
