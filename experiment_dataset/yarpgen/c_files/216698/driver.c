#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = -517030334075830319LL;
_Bool var_1 = (_Bool)0;
unsigned int var_2 = 70678176U;
signed char var_4 = (signed char)22;
_Bool var_5 = (_Bool)1;
int var_6 = 286255428;
int var_7 = 250720631;
int var_9 = -927518054;
long long int var_10 = 9216636471566563710LL;
int zero = 0;
long long int var_12 = 2981807189026563860LL;
unsigned char var_13 = (unsigned char)235;
signed char var_14 = (signed char)106;
unsigned int var_15 = 3752876428U;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
