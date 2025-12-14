#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_3 = 5821484351325626240LL;
short var_7 = (short)8601;
unsigned short var_8 = (unsigned short)1276;
long long int var_9 = 4663565994983794456LL;
_Bool var_11 = (_Bool)1;
unsigned char var_14 = (unsigned char)160;
int var_15 = -264578442;
unsigned int var_16 = 4243082899U;
int zero = 0;
int var_18 = -826186622;
unsigned int var_19 = 4215800369U;
short var_20 = (short)-2836;
int var_21 = 1547907867;
unsigned short var_22 = (unsigned short)31262;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
