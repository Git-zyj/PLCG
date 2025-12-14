#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)52095;
unsigned char var_1 = (unsigned char)181;
unsigned long long int var_4 = 14181678112988547892ULL;
unsigned short var_5 = (unsigned short)8675;
_Bool var_6 = (_Bool)0;
unsigned short var_9 = (unsigned short)55461;
int zero = 0;
_Bool var_10 = (_Bool)0;
_Bool var_11 = (_Bool)0;
unsigned short var_12 = (unsigned short)65142;
unsigned char var_13 = (unsigned char)117;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
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
