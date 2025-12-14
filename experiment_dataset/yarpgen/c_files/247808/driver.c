#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 2183401267U;
unsigned int var_5 = 4282390317U;
unsigned int var_6 = 2656056986U;
unsigned char var_7 = (unsigned char)180;
unsigned char var_8 = (unsigned char)175;
int var_10 = 698499617;
signed char var_15 = (signed char)-93;
int zero = 0;
unsigned short var_17 = (unsigned short)21113;
int var_18 = -1851055579;
unsigned long long int var_19 = 10717258486348795835ULL;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
