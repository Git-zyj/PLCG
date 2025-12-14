#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)44;
short var_6 = (short)-29730;
signed char var_9 = (signed char)5;
unsigned short var_10 = (unsigned short)57681;
unsigned char var_11 = (unsigned char)29;
signed char var_12 = (signed char)-110;
int zero = 0;
long long int var_19 = -6596551138776303505LL;
_Bool var_20 = (_Bool)0;
signed char var_21 = (signed char)85;
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
