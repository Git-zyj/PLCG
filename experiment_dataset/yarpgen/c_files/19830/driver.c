#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 8125573596879554823ULL;
signed char var_1 = (signed char)50;
long long int var_2 = 267561048833998560LL;
unsigned int var_4 = 2803046350U;
unsigned char var_6 = (unsigned char)188;
unsigned char var_9 = (unsigned char)209;
_Bool var_10 = (_Bool)0;
unsigned long long int var_11 = 3582686838659528179ULL;
long long int var_13 = 2552424494494599158LL;
signed char var_14 = (signed char)-117;
int zero = 0;
signed char var_15 = (signed char)-45;
unsigned char var_16 = (unsigned char)121;
_Bool var_17 = (_Bool)0;
unsigned char var_18 = (unsigned char)198;
void init() {
}

void checksum() {
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
