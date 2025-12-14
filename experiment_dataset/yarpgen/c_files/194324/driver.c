#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

int var_1 = -1474664898;
signed char var_2 = (signed char)-51;
unsigned char var_6 = (unsigned char)109;
unsigned long long int var_7 = 3631346991789885255ULL;
unsigned char var_8 = (unsigned char)60;
int var_9 = -204176529;
int var_11 = 1100232728;
int zero = 0;
unsigned int var_12 = 4129000669U;
long long int var_13 = 1391393026910412884LL;
long long int var_14 = -8933153139876927200LL;
unsigned long long int var_15 = 12730330645534855350ULL;
void init() {
}

void checksum() {
    hash(&seed, var_12);
    hash(&seed, var_13);
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
