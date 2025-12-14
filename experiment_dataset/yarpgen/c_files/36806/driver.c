#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_1 = (unsigned char)72;
unsigned char var_2 = (unsigned char)64;
unsigned char var_3 = (unsigned char)217;
unsigned char var_4 = (unsigned char)69;
unsigned int var_5 = 2122605976U;
unsigned long long int var_6 = 11165056608685460430ULL;
int var_7 = -349028735;
long long int var_8 = 6941026844478244910LL;
_Bool var_9 = (_Bool)0;
unsigned char var_12 = (unsigned char)217;
int zero = 0;
unsigned char var_13 = (unsigned char)59;
_Bool var_14 = (_Bool)1;
long long int var_15 = 1419758780040750227LL;
signed char var_16 = (signed char)101;
unsigned long long int var_17 = 12909874090830786923ULL;
void init() {
}

void checksum() {
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
    hash(&seed, var_17);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
