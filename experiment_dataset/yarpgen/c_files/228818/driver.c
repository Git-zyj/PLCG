#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_2 = 1170187277U;
unsigned int var_6 = 1900338364U;
unsigned int var_7 = 3817717496U;
long long int var_8 = 3946169897477024812LL;
_Bool var_14 = (_Bool)0;
int zero = 0;
unsigned char var_18 = (unsigned char)120;
unsigned short var_19 = (unsigned short)60499;
unsigned char var_20 = (unsigned char)171;
unsigned int var_21 = 3428243857U;
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
