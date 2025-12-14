#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = -1546084305;
unsigned char var_3 = (unsigned char)95;
short var_6 = (short)16055;
long long int var_8 = 8347051557624402338LL;
int var_9 = 1441625022;
unsigned short var_12 = (unsigned short)35972;
int zero = 0;
unsigned short var_14 = (unsigned short)49457;
int var_15 = -1697920982;
long long int var_16 = -7991487998553893551LL;
signed char var_17 = (signed char)-90;
_Bool var_18 = (_Bool)1;
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
