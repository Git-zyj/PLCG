#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)10;
signed char var_9 = (signed char)-12;
_Bool var_10 = (_Bool)0;
long long int var_15 = -637514858278349710LL;
int zero = 0;
int var_19 = 105519488;
unsigned char var_20 = (unsigned char)58;
long long int var_21 = 5378252378377003977LL;
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
