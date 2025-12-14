#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_0 = 584430665;
short var_1 = (short)-16941;
long long int var_2 = 746341095379716597LL;
unsigned long long int var_3 = 17119211434258782367ULL;
unsigned char var_5 = (unsigned char)240;
long long int var_6 = 2087079351922597695LL;
int var_7 = 1954358860;
_Bool var_9 = (_Bool)1;
unsigned short var_10 = (unsigned short)48873;
int var_11 = -1441935239;
int zero = 0;
short var_12 = (short)5511;
unsigned long long int var_13 = 9306754196942901380ULL;
unsigned short var_14 = (unsigned short)61409;
short var_15 = (short)13989;
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
