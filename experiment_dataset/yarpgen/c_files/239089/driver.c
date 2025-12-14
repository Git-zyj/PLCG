#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16383208055988720745ULL;
long long int var_1 = 957398083675432472LL;
short var_3 = (short)30983;
_Bool var_5 = (_Bool)1;
long long int var_6 = -6626391072898504421LL;
unsigned short var_7 = (unsigned short)60442;
long long int var_8 = 2580074246513674574LL;
_Bool var_11 = (_Bool)1;
signed char var_12 = (signed char)-17;
int zero = 0;
unsigned char var_15 = (unsigned char)114;
unsigned long long int var_16 = 3959212677230571045ULL;
long long int var_17 = 4793146365652070356LL;
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
