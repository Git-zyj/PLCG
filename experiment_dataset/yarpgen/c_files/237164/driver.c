#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned char var_0 = (unsigned char)98;
unsigned short var_2 = (unsigned short)48257;
unsigned long long int var_3 = 3770275162715031168ULL;
signed char var_5 = (signed char)-81;
unsigned long long int var_6 = 10711373712833454750ULL;
long long int var_7 = 7430184502146934117LL;
int var_9 = 1712395302;
signed char var_11 = (signed char)(-127 - 1);
signed char var_12 = (signed char)-66;
int zero = 0;
unsigned long long int var_14 = 13721822375690196055ULL;
unsigned long long int var_15 = 8075805145522940018ULL;
void init() {
}

void checksum() {
    hash(&seed, var_14);
    hash(&seed, var_15);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
