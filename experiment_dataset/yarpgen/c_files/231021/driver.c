#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-91;
short var_3 = (short)5121;
long long int var_14 = -2793992572257898682LL;
signed char var_18 = (signed char)-7;
int zero = 0;
short var_20 = (short)-12676;
unsigned long long int var_21 = 12740330279673969491ULL;
unsigned short var_22 = (unsigned short)25229;
unsigned long long int var_23 = 4824368788103820296ULL;
unsigned long long int var_24 = 9727135231891347325ULL;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
    hash(&seed, var_23);
    hash(&seed, var_24);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
