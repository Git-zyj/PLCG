#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
signed char var_2 = (signed char)27;
unsigned int var_3 = 783170783U;
short var_4 = (short)-28519;
signed char var_5 = (signed char)-4;
int var_6 = -1780055557;
long long int var_9 = 4587503269258728853LL;
signed char var_10 = (signed char)-118;
unsigned int var_12 = 1854516710U;
int zero = 0;
unsigned char var_13 = (unsigned char)13;
signed char var_14 = (signed char)11;
signed char var_15 = (signed char)-127;
unsigned short var_16 = (unsigned short)14183;
int var_17 = 1250204737;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
