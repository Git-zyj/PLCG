#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_1 = (unsigned short)18972;
int var_5 = 1199319648;
long long int var_7 = 726401126386723742LL;
_Bool var_9 = (_Bool)0;
int var_10 = 1523739109;
unsigned char var_11 = (unsigned char)36;
int zero = 0;
signed char var_12 = (signed char)-98;
int var_13 = 2007419041;
unsigned char var_14 = (unsigned char)166;
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
