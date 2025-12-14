#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

signed char var_2 = (signed char)-53;
_Bool var_3 = (_Bool)0;
unsigned long long int var_5 = 8677400115178670021ULL;
signed char var_6 = (signed char)-15;
unsigned long long int var_7 = 1560579008573472435ULL;
signed char var_8 = (signed char)-88;
long long int var_9 = 3403926426144156541LL;
unsigned char var_10 = (unsigned char)104;
int zero = 0;
unsigned short var_12 = (unsigned short)28382;
short var_13 = (short)10544;
signed char var_14 = (signed char)-110;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
    hash(&seed, var_14);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
