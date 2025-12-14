#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)73;
long long int var_4 = 1204281028562447940LL;
long long int var_5 = -3649575412602481545LL;
_Bool var_7 = (_Bool)0;
signed char var_9 = (signed char)114;
int zero = 0;
unsigned short var_10 = (unsigned short)10163;
unsigned char var_11 = (unsigned char)177;
unsigned long long int var_12 = 7419297452913407251ULL;
void init() {
}

void checksum() {
    hash(&seed, var_10);
    hash(&seed, var_11);
    hash(&seed, var_12);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
