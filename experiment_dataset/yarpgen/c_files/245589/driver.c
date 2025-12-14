#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -421935598202947286LL;
_Bool var_2 = (_Bool)0;
unsigned char var_4 = (unsigned char)182;
short var_6 = (short)-10331;
unsigned char var_7 = (unsigned char)219;
signed char var_9 = (signed char)101;
int zero = 0;
long long int var_10 = -8781876135556869366LL;
short var_11 = (short)-18590;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
