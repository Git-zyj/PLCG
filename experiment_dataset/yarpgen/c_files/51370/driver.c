#include <stdio.h>

unsigned long long int seed = 0;
void hash(unsigned long long int *seed, unsigned long long int const v) {
    *seed ^= v + 0x9e3779b9 + ((*seed)<<6) + ((*seed)>>2);
}

unsigned short var_4 = (unsigned short)3420;
long long int var_7 = 3209361090053768343LL;
long long int var_9 = -3405474777657104366LL;
short var_11 = (short)18917;
unsigned short var_12 = (unsigned short)58488;
int var_17 = -2041240320;
int zero = 0;
unsigned short var_20 = (unsigned short)34600;
signed char var_21 = (signed char)-46;
unsigned char var_22 = (unsigned char)67;
void init() {
}

void checksum() {
    hash(&seed, var_20);
    hash(&seed, var_21);
    hash(&seed, var_22);
}
void test();

int main() {
    init();
    test();
    checksum();
    printf("%llu\n", seed);
}
