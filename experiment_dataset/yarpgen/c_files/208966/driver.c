#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 3344806235693960507LL;
int var_2 = -498821515;
unsigned int var_7 = 4115566247U;
unsigned long long int var_8 = 3963686507708551194ULL;
unsigned short var_9 = (unsigned short)12718;
int zero = 0;
unsigned short var_12 = (unsigned short)41433;
short var_13 = (short)-10521;
_Bool var_14 = (_Bool)1;
unsigned short var_15 = (unsigned short)48440;
unsigned short var_16 = (unsigned short)32596;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
