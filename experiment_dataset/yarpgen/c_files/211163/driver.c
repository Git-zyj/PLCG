#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

short var_1 = (short)6986;
long long int var_2 = 9070838642168700243LL;
unsigned short var_5 = (unsigned short)6495;
signed char var_6 = (signed char)-27;
unsigned short var_7 = (unsigned short)41478;
short var_9 = (short)19594;
unsigned short var_10 = (unsigned short)14246;
int zero = 0;
short var_12 = (short)-3423;
_Bool var_13 = (_Bool)0;
unsigned short var_14 = (unsigned short)59861;
_Bool var_15 = (_Bool)0;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
