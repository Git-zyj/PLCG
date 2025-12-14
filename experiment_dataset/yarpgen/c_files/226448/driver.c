#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3632865945U;
unsigned char var_1 = (unsigned char)89;
long long int var_2 = 8298605402513046888LL;
long long int var_3 = -7694058458399077374LL;
int var_4 = -290050381;
unsigned char var_5 = (unsigned char)90;
_Bool var_6 = (_Bool)0;
_Bool var_7 = (_Bool)0;
unsigned char var_8 = (unsigned char)50;
int var_9 = -1338408957;
_Bool var_10 = (_Bool)0;
int zero = 0;
unsigned char var_12 = (unsigned char)47;
unsigned char var_13 = (unsigned char)189;
signed char var_14 = (signed char)47;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
