#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)32;
_Bool var_2 = (_Bool)1;
short var_3 = (short)2294;
unsigned char var_4 = (unsigned char)27;
unsigned long long int var_5 = 2321363464548611543ULL;
signed char var_7 = (signed char)51;
short var_8 = (short)31575;
unsigned long long int var_9 = 8866670022869841397ULL;
long long int var_12 = -8245369362445309611LL;
int zero = 0;
signed char var_15 = (signed char)87;
unsigned short var_16 = (unsigned short)39800;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
