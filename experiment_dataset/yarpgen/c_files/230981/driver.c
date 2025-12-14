#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)118;
unsigned short var_2 = (unsigned short)11659;
long long int var_3 = 7790505943394913949LL;
unsigned char var_6 = (unsigned char)185;
int var_10 = -825582720;
int zero = 0;
short var_14 = (short)29977;
_Bool var_15 = (_Bool)0;
int var_16 = -1036449591;
short var_17 = (short)27239;
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
