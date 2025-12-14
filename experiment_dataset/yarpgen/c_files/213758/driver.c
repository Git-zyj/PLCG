#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)189;
long long int var_1 = 8295096870792240564LL;
signed char var_3 = (signed char)-117;
int var_4 = 524621556;
_Bool var_7 = (_Bool)1;
signed char var_8 = (signed char)-125;
_Bool var_9 = (_Bool)1;
int zero = 0;
signed char var_11 = (signed char)-122;
int var_12 = -458547739;
_Bool var_13 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_11);
    hash(&seed, var_12);
    hash(&seed, var_13);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
