#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_0 = (unsigned short)13781;
_Bool var_4 = (_Bool)0;
unsigned char var_6 = (unsigned char)114;
int var_9 = -96186007;
int var_10 = 993241590;
unsigned char var_13 = (unsigned char)69;
long long int var_15 = 7461074734905940679LL;
_Bool var_18 = (_Bool)1;
int zero = 0;
long long int var_19 = -1512902410965833327LL;
unsigned char var_20 = (unsigned char)42;
_Bool var_21 = (_Bool)1;
void init() {
}

void checksum() {
    hash(&seed, var_19);
    hash(&seed, var_20);
    hash(&seed, var_21);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
