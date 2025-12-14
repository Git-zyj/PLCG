#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_3 = (unsigned short)51426;
unsigned char var_5 = (unsigned char)75;
int var_6 = -610393413;
_Bool var_7 = (_Bool)0;
unsigned char var_9 = (unsigned char)40;
int zero = 0;
signed char var_15 = (signed char)-63;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)9638;
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
