#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

_Bool var_0 = (_Bool)0;
unsigned char var_3 = (unsigned char)248;
signed char var_4 = (signed char)-84;
unsigned long long int var_6 = 440632814205208655ULL;
signed char var_7 = (signed char)98;
unsigned long long int var_9 = 507728900140369084ULL;
int zero = 0;
unsigned char var_10 = (unsigned char)138;
unsigned long long int var_11 = 7772677575013560317ULL;
long long int var_12 = -8205581357145696245LL;
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
