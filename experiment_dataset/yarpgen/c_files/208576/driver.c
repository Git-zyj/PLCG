#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)198;
unsigned char var_2 = (unsigned char)117;
unsigned char var_5 = (unsigned char)250;
_Bool var_9 = (_Bool)0;
unsigned char var_10 = (unsigned char)88;
_Bool var_13 = (_Bool)0;
unsigned char var_14 = (unsigned char)148;
unsigned char var_15 = (unsigned char)121;
_Bool var_18 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)156;
_Bool var_20 = (_Bool)0;
unsigned char var_21 = (unsigned char)154;
unsigned char var_22 = (unsigned char)25;
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
