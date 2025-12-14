#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_2 = (unsigned short)27291;
signed char var_3 = (signed char)-10;
unsigned char var_5 = (unsigned char)88;
_Bool var_6 = (_Bool)1;
_Bool var_9 = (_Bool)0;
int var_18 = 1800133781;
int zero = 0;
unsigned char var_20 = (unsigned char)78;
long long int var_21 = -4983685006195756976LL;
long long int var_22 = -3050937477373142900LL;
void init() {
}

void checksum() {
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
