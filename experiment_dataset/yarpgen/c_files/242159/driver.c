#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)15382;
unsigned short var_5 = (unsigned short)42801;
unsigned short var_9 = (unsigned short)19845;
unsigned short var_14 = (unsigned short)29247;
unsigned short var_15 = (unsigned short)2188;
long long int var_17 = 7929657656856029789LL;
int zero = 0;
int var_18 = 798341942;
unsigned char var_19 = (unsigned char)206;
signed char var_20 = (signed char)-1;
_Bool var_21 = (_Bool)1;
short var_22 = (short)13505;
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
