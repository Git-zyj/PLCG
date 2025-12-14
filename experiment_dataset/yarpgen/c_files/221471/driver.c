#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_1 = 1067773910788511146LL;
long long int var_9 = -3539211521454747458LL;
signed char var_11 = (signed char)68;
unsigned short var_15 = (unsigned short)42765;
int zero = 0;
int var_17 = 140668134;
unsigned short var_18 = (unsigned short)11111;
void init() {
}

void checksum() {
    hash(&seed, var_17);
    hash(&seed, var_18);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
