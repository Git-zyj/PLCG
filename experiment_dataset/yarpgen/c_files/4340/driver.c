#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
long long int var_4 = -5803729303006172166LL;
long long int var_8 = -702438661902526288LL;
_Bool var_9 = (_Bool)1;
int var_11 = -994176838;
long long int var_12 = -6801811471980078231LL;
int var_15 = 707528944;
int zero = 0;
unsigned short var_19 = (unsigned short)13495;
short var_20 = (short)24654;
int var_21 = 755966855;
unsigned char var_22 = (unsigned char)117;
int var_23 = 581379072;
void init() {
}

void checksum() {
    hash(&seed, var_19);
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
