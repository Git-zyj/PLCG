#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)5773;
_Bool var_1 = (_Bool)1;
unsigned int var_3 = 1927859802U;
unsigned char var_7 = (unsigned char)191;
long long int var_9 = -1848166780739529068LL;
unsigned int var_10 = 1773419632U;
long long int var_11 = -79225176308925029LL;
unsigned char var_13 = (unsigned char)11;
int zero = 0;
int var_14 = 407084053;
unsigned short var_15 = (unsigned short)26308;
unsigned int var_16 = 2140566184U;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
    hash(&seed, var_16);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
