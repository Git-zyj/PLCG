#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -287369291;
unsigned short var_3 = (unsigned short)16813;
unsigned char var_6 = (unsigned char)138;
short var_10 = (short)-13289;
short var_12 = (short)874;
_Bool var_13 = (_Bool)0;
int zero = 0;
short var_18 = (short)3245;
_Bool var_19 = (_Bool)1;
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
