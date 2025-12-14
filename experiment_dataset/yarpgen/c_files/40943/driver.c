#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)44210;
_Bool var_2 = (_Bool)1;
unsigned char var_3 = (unsigned char)189;
_Bool var_4 = (_Bool)1;
long long int var_7 = 2358307511981212734LL;
long long int var_10 = 7489502535849343849LL;
unsigned long long int var_13 = 5823928117960926013ULL;
unsigned long long int var_14 = 7408957427039192650ULL;
unsigned char var_16 = (unsigned char)163;
short var_17 = (short)26624;
int zero = 0;
int var_18 = -1058780523;
unsigned short var_19 = (unsigned short)31207;
unsigned short var_20 = (unsigned short)16840;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
