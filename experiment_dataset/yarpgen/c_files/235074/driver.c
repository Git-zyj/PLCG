#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 17881439238330366180ULL;
int var_2 = -1007727284;
_Bool var_4 = (_Bool)1;
long long int var_7 = -1643115849176135218LL;
_Bool var_9 = (_Bool)1;
unsigned long long int var_10 = 5276046166962827424ULL;
unsigned int var_11 = 3719254019U;
unsigned short var_13 = (unsigned short)64071;
int zero = 0;
long long int var_17 = 8377152696479747405LL;
short var_18 = (short)14710;
void init() {
}

void checksum() {
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
