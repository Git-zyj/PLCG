#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 2324837615U;
unsigned char var_5 = (unsigned char)114;
_Bool var_6 = (_Bool)0;
unsigned char var_12 = (unsigned char)119;
int var_14 = -1086603650;
long long int var_17 = -5316359361609932717LL;
int zero = 0;
unsigned int var_18 = 3974055080U;
unsigned char var_19 = (unsigned char)111;
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
