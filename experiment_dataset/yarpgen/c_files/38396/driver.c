#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)85;
unsigned int var_1 = 4222724433U;
unsigned char var_2 = (unsigned char)248;
int var_3 = -1348489001;
long long int var_4 = -1056303427192585712LL;
unsigned char var_5 = (unsigned char)195;
int var_7 = -1442217054;
short var_8 = (short)-21719;
long long int var_9 = 6266236694855215452LL;
unsigned char var_11 = (unsigned char)188;
unsigned char var_12 = (unsigned char)123;
int zero = 0;
_Bool var_14 = (_Bool)0;
_Bool var_15 = (_Bool)1;
unsigned char var_16 = (unsigned char)82;
_Bool var_17 = (_Bool)1;
signed char var_18 = (signed char)-100;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
