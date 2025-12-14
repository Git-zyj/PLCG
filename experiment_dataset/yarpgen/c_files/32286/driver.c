#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_5 = (unsigned short)41490;
int var_8 = 1165834970;
_Bool var_9 = (_Bool)1;
long long int var_10 = 4263902917118196564LL;
unsigned char var_12 = (unsigned char)188;
unsigned short var_13 = (unsigned short)59318;
int zero = 0;
unsigned char var_15 = (unsigned char)138;
signed char var_16 = (signed char)105;
unsigned short var_17 = (unsigned short)60105;
long long int var_18 = -8766673694429853906LL;
unsigned short var_19 = (unsigned short)53451;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
