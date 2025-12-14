#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)55370;
unsigned char var_2 = (unsigned char)1;
unsigned char var_9 = (unsigned char)240;
long long int var_17 = 4835076575384562213LL;
int zero = 0;
unsigned char var_19 = (unsigned char)159;
unsigned int var_20 = 2634340289U;
_Bool var_21 = (_Bool)0;
unsigned long long int var_22 = 9099131899951257769ULL;
void init() {
}

void checksum() {
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
