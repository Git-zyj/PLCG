#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned long long int var_0 = 7295175233371988218ULL;
long long int var_3 = -8194281328470463104LL;
unsigned short var_8 = (unsigned short)8022;
unsigned char var_9 = (unsigned char)78;
unsigned long long int var_10 = 11185642350347894233ULL;
unsigned char var_12 = (unsigned char)238;
unsigned long long int var_14 = 1360770772313253576ULL;
short var_15 = (short)720;
int zero = 0;
signed char var_16 = (signed char)12;
signed char var_17 = (signed char)29;
void init() {
}

void checksum() {
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
