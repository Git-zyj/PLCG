#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 15195588187527244145ULL;
unsigned char var_3 = (unsigned char)131;
unsigned long long int var_4 = 10079769406873314583ULL;
long long int var_7 = -5118235956279219787LL;
unsigned char var_10 = (unsigned char)144;
_Bool var_13 = (_Bool)1;
int zero = 0;
unsigned short var_15 = (unsigned short)14610;
long long int var_16 = -3831630237890338302LL;
signed char var_17 = (signed char)-18;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
