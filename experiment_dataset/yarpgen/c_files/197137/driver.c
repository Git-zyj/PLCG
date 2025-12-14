#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned int var_0 = 3606735160U;
short var_3 = (short)-27942;
signed char var_6 = (signed char)119;
short var_7 = (short)-15386;
int var_9 = 563894371;
signed char var_10 = (signed char)-24;
signed char var_11 = (signed char)118;
int zero = 0;
unsigned long long int var_15 = 12093391480185784656ULL;
_Bool var_16 = (_Bool)1;
unsigned long long int var_17 = 4466162013749758302ULL;
void init() {
}

void checksum() {
    hash(&seed, var_15);
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
