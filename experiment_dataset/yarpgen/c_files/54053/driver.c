#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6334203209945493707LL;
unsigned int var_2 = 1823459078U;
unsigned short var_4 = (unsigned short)16328;
_Bool var_6 = (_Bool)1;
signed char var_7 = (signed char)-85;
unsigned int var_9 = 3407823306U;
unsigned short var_10 = (unsigned short)17577;
int var_11 = -1080110885;
int zero = 0;
signed char var_12 = (signed char)63;
signed char var_13 = (signed char)104;
long long int var_14 = -2899316067632622448LL;
short var_15 = (short)-19918;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
