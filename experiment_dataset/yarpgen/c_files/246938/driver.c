#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)250;
_Bool var_3 = (_Bool)1;
unsigned char var_8 = (unsigned char)162;
_Bool var_9 = (_Bool)1;
unsigned char var_13 = (unsigned char)90;
int zero = 0;
unsigned char var_18 = (unsigned char)206;
_Bool var_19 = (_Bool)1;
unsigned char var_20 = (unsigned char)176;
long long int var_21 = 1268827532728561842LL;
long long int var_22 = 6189330184050601621LL;
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
