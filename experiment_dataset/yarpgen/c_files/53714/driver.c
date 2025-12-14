#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

long long int var_0 = 6928797091391214559LL;
long long int var_1 = 8643122101721212474LL;
_Bool var_2 = (_Bool)1;
_Bool var_3 = (_Bool)0;
short var_4 = (short)-2347;
short var_5 = (short)31362;
_Bool var_6 = (_Bool)0;
unsigned int var_7 = 2656656502U;
unsigned char var_8 = (unsigned char)166;
short var_9 = (short)1562;
unsigned char var_10 = (unsigned char)1;
unsigned long long int var_12 = 8126973181283200318ULL;
short var_15 = (short)11722;
int zero = 0;
signed char var_17 = (signed char)-50;
int var_18 = 637633006;
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
