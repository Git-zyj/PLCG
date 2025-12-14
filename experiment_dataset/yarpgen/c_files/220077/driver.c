#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
int var_1 = 1206403193;
short var_2 = (short)2053;
int var_4 = 683547457;
int var_5 = -260201828;
long long int var_7 = 5653348457290217615LL;
unsigned short var_8 = (unsigned short)8991;
int var_10 = -2030598829;
int zero = 0;
long long int var_11 = -5373117116941525642LL;
unsigned short var_12 = (unsigned short)35813;
long long int var_13 = 8567463555044057869LL;
unsigned short var_14 = (unsigned short)54603;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
