#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_2 = 9094881262064117756LL;
unsigned int var_3 = 2620311164U;
short var_10 = (short)32425;
unsigned long long int var_14 = 8826004623336238106ULL;
_Bool var_15 = (_Bool)1;
short var_16 = (short)-446;
int zero = 0;
unsigned long long int var_18 = 15996646862299883810ULL;
unsigned int var_19 = 39933523U;
signed char var_20 = (signed char)-111;
int var_21 = -1125494522;
unsigned short var_22 = (unsigned short)60914;
void init() {
}

void checksum() {
    hash(&seed, var_18);
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
