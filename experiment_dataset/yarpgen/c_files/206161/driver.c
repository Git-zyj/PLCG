#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)149;
unsigned char var_2 = (unsigned char)115;
unsigned int var_3 = 2678061084U;
unsigned long long int var_7 = 18201542524327129309ULL;
unsigned int var_9 = 4228605041U;
long long int var_11 = -6736321250043604686LL;
unsigned int var_15 = 667675438U;
_Bool var_16 = (_Bool)1;
int zero = 0;
unsigned char var_17 = (unsigned char)81;
unsigned long long int var_18 = 7847359703904996989ULL;
_Bool var_19 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_17);
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
