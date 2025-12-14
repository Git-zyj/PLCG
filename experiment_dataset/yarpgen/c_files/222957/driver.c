#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)1;
unsigned char var_1 = (unsigned char)85;
signed char var_2 = (signed char)45;
unsigned short var_3 = (unsigned short)57281;
int var_5 = 839566910;
_Bool var_6 = (_Bool)0;
unsigned long long int var_7 = 260405119235762606ULL;
signed char var_9 = (signed char)9;
long long int var_10 = 4589946362527918152LL;
unsigned long long int var_11 = 2100445499042763815ULL;
unsigned int var_12 = 310346809U;
int zero = 0;
unsigned char var_15 = (unsigned char)109;
long long int var_16 = -3906949764908404590LL;
unsigned int var_17 = 3260019480U;
unsigned char var_18 = (unsigned char)150;
unsigned short var_19 = (unsigned short)15875;
signed char var_20 = (signed char)-5;
unsigned char var_21 = (unsigned char)101;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
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
