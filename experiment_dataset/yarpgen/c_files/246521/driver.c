#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)25;
unsigned short var_5 = (unsigned short)31700;
unsigned char var_7 = (unsigned char)95;
long long int var_9 = 8727056631654576794LL;
unsigned char var_11 = (unsigned char)244;
unsigned short var_15 = (unsigned short)7637;
long long int var_16 = -6971246637705926580LL;
_Bool var_18 = (_Bool)0;
int zero = 0;
short var_20 = (short)15791;
long long int var_21 = -3806312143019341141LL;
short var_22 = (short)-15783;
long long int var_23 = -1050612268000949123LL;
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
