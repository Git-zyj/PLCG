#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)61767;
unsigned char var_1 = (unsigned char)140;
signed char var_2 = (signed char)94;
unsigned long long int var_5 = 11902749256917674826ULL;
unsigned char var_6 = (unsigned char)250;
unsigned long long int var_8 = 13761117690765359261ULL;
unsigned short var_9 = (unsigned short)31263;
unsigned char var_12 = (unsigned char)251;
_Bool var_14 = (_Bool)0;
int zero = 0;
int var_16 = 367350575;
_Bool var_17 = (_Bool)1;
void init() {
}

void checksum() {
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
