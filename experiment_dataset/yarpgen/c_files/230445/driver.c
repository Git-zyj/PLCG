#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_3 = (short)-12561;
int var_6 = -1957250787;
unsigned short var_7 = (unsigned short)34740;
long long int var_11 = -3829022957666657509LL;
short var_12 = (short)-31676;
_Bool var_14 = (_Bool)1;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned short var_19 = (unsigned short)54717;
short var_20 = (short)-32204;
_Bool var_21 = (_Bool)0;
unsigned char var_22 = (unsigned char)0;
int var_23 = -1269095411;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
