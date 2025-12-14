#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_2 = (_Bool)1;
signed char var_4 = (signed char)17;
long long int var_6 = 3127096985329311373LL;
unsigned short var_9 = (unsigned short)26457;
unsigned long long int var_11 = 4959420570354484252ULL;
signed char var_12 = (signed char)60;
int zero = 0;
int var_15 = 30105738;
signed char var_16 = (signed char)13;
signed char var_17 = (signed char)-34;
unsigned char var_18 = (unsigned char)182;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
