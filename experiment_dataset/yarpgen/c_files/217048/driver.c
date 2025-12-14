#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 1305478452;
unsigned int var_2 = 2662071158U;
long long int var_3 = -9080701912767398585LL;
unsigned int var_4 = 1947230001U;
_Bool var_7 = (_Bool)1;
unsigned short var_9 = (unsigned short)11063;
_Bool var_15 = (_Bool)0;
int zero = 0;
int var_19 = 501458387;
unsigned int var_20 = 79273347U;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)153;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
