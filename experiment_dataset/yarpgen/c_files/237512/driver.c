#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)138;
int var_2 = -50526546;
signed char var_6 = (signed char)-114;
unsigned long long int var_8 = 7373145371355638777ULL;
_Bool var_9 = (_Bool)1;
_Bool var_12 = (_Bool)0;
_Bool var_13 = (_Bool)0;
int zero = 0;
unsigned long long int var_14 = 8974869660515116107ULL;
unsigned short var_15 = (unsigned short)54241;
short var_16 = (short)6956;
unsigned short var_17 = (unsigned short)18206;
void init() {
}

void checksum() {
    hash(&seed, var_14);
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
