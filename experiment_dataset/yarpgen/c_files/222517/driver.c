#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 868368536312347897LL;
_Bool var_3 = (_Bool)0;
unsigned short var_4 = (unsigned short)26138;
signed char var_5 = (signed char)15;
int var_7 = -1609907788;
short var_11 = (short)27723;
unsigned char var_12 = (unsigned char)14;
unsigned int var_13 = 3128090416U;
int zero = 0;
short var_18 = (short)7606;
unsigned short var_19 = (unsigned short)22406;
unsigned short var_20 = (unsigned short)6456;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
