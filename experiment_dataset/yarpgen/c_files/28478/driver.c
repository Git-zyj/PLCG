#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)41933;
_Bool var_6 = (_Bool)0;
long long int var_7 = -6345439274060066940LL;
signed char var_8 = (signed char)1;
unsigned char var_9 = (unsigned char)27;
short var_10 = (short)24781;
_Bool var_12 = (_Bool)1;
unsigned short var_13 = (unsigned short)19616;
int zero = 0;
short var_15 = (short)29163;
_Bool var_16 = (_Bool)1;
unsigned short var_17 = (unsigned short)30927;
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
