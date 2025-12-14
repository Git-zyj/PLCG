#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 16289410511349530258ULL;
unsigned long long int var_2 = 14904528689340784400ULL;
unsigned long long int var_4 = 13848749774532078720ULL;
unsigned int var_5 = 635866608U;
long long int var_7 = 4186472139893692220LL;
unsigned char var_14 = (unsigned char)85;
short var_16 = (short)19541;
int zero = 0;
long long int var_17 = 4143699365783865706LL;
signed char var_18 = (signed char)53;
int var_19 = 812941707;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
    hash(&seed, var_19);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
