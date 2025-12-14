#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 11057234001735795057ULL;
long long int var_1 = 954145313140683466LL;
unsigned short var_3 = (unsigned short)41967;
unsigned char var_5 = (unsigned char)110;
_Bool var_7 = (_Bool)0;
int zero = 0;
unsigned long long int var_10 = 2697294179615926556ULL;
_Bool var_11 = (_Bool)0;
unsigned char var_12 = (unsigned char)40;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
