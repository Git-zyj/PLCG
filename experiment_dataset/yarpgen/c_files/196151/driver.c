#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_3 = (unsigned char)254;
long long int var_6 = -3618027482333540461LL;
int var_7 = 2029305847;
int var_8 = -869009147;
signed char var_9 = (signed char)80;
unsigned char var_12 = (unsigned char)33;
unsigned int var_17 = 2194582548U;
int zero = 0;
long long int var_18 = -5654233143933083761LL;
unsigned short var_19 = (unsigned short)57680;
_Bool var_20 = (_Bool)1;
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
