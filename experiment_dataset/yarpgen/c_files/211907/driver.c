#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)1;
long long int var_2 = -1121574865153087297LL;
unsigned short var_3 = (unsigned short)60471;
unsigned short var_4 = (unsigned short)10272;
_Bool var_5 = (_Bool)1;
unsigned short var_6 = (unsigned short)60383;
int var_9 = -833890662;
int zero = 0;
int var_11 = 519465807;
int var_12 = 9357762;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
