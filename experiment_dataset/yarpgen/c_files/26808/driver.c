#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)44356;
signed char var_6 = (signed char)118;
_Bool var_8 = (_Bool)1;
unsigned short var_9 = (unsigned short)2054;
long long int var_11 = -2112267027725756242LL;
short var_12 = (short)23557;
long long int var_14 = 2603813614958403657LL;
unsigned short var_15 = (unsigned short)7511;
int zero = 0;
short var_16 = (short)-5691;
short var_17 = (short)-32500;
unsigned int var_18 = 2287520381U;
long long int var_19 = 5546446407853815301LL;
void init() {
}

void checksum() {
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
