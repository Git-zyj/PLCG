#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_0 = (signed char)25;
_Bool var_5 = (_Bool)1;
unsigned short var_12 = (unsigned short)56332;
unsigned char var_13 = (unsigned char)10;
int zero = 0;
long long int var_18 = 3142728731250667884LL;
unsigned char var_19 = (unsigned char)186;
signed char var_20 = (signed char)-75;
unsigned char var_21 = (unsigned char)121;
void init() {
}

void checksum() {
    hash(&seed, var_18);
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
