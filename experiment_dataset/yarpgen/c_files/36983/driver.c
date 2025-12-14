#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_1 = (signed char)-18;
int var_3 = -1676675411;
unsigned char var_6 = (unsigned char)226;
_Bool var_7 = (_Bool)1;
int var_9 = -565426769;
int var_10 = -74112816;
int zero = 0;
long long int var_11 = 1123375263452840250LL;
short var_12 = (short)-2874;
long long int var_13 = -6735694007560900173LL;
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
