#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -935244210933243503LL;
unsigned short var_2 = (unsigned short)30893;
signed char var_3 = (signed char)-108;
int var_4 = 1408992317;
int var_5 = 309347137;
_Bool var_6 = (_Bool)0;
short var_8 = (short)7701;
long long int var_9 = 771493638765218466LL;
int var_12 = -406989373;
signed char var_13 = (signed char)-10;
int var_15 = -1760080529;
_Bool var_17 = (_Bool)0;
int zero = 0;
unsigned char var_19 = (unsigned char)207;
signed char var_20 = (signed char)-52;
short var_21 = (short)9217;
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
