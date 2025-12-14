#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 1626237766U;
unsigned char var_1 = (unsigned char)167;
_Bool var_4 = (_Bool)1;
long long int var_5 = -7898166839246474368LL;
unsigned char var_13 = (unsigned char)158;
int zero = 0;
unsigned char var_16 = (unsigned char)105;
unsigned char var_17 = (unsigned char)193;
long long int var_18 = -8064852299947806480LL;
void init() {
}

void checksum() {
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
