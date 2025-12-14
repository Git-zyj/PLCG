#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_3 = -2117931265;
signed char var_5 = (signed char)29;
signed char var_6 = (signed char)124;
long long int var_9 = -3094665492873041272LL;
signed char var_10 = (signed char)-44;
signed char var_12 = (signed char)-4;
signed char var_14 = (signed char)-8;
unsigned char var_15 = (unsigned char)60;
int var_17 = 1882527886;
unsigned short var_18 = (unsigned short)23153;
int zero = 0;
unsigned char var_19 = (unsigned char)117;
signed char var_20 = (signed char)85;
long long int var_21 = 3028919262674800254LL;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
