#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -6580461894484210503LL;
unsigned int var_2 = 1406386998U;
unsigned short var_5 = (unsigned short)7905;
unsigned char var_6 = (unsigned char)85;
unsigned char var_7 = (unsigned char)12;
unsigned int var_9 = 4265607136U;
int var_10 = -346758540;
unsigned short var_11 = (unsigned short)44262;
signed char var_12 = (signed char)-119;
unsigned int var_14 = 2734959653U;
signed char var_15 = (signed char)105;
int var_18 = -1936896471;
int zero = 0;
unsigned char var_20 = (unsigned char)197;
unsigned char var_21 = (unsigned char)48;
int var_22 = -194809965;
unsigned short var_23 = (unsigned short)51068;
void init() {
}

void checksum() {
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
