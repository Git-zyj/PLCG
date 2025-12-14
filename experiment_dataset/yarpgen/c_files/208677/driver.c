#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = -2543014258986860881LL;
short var_3 = (short)25220;
long long int var_4 = 2983633092353191572LL;
signed char var_5 = (signed char)-79;
unsigned char var_7 = (unsigned char)70;
signed char var_8 = (signed char)-100;
unsigned long long int var_9 = 17143433836198695037ULL;
int zero = 0;
short var_11 = (short)2867;
signed char var_12 = (signed char)-123;
unsigned short var_13 = (unsigned short)9661;
int var_14 = 2116970346;
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
